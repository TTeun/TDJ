#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <cstdlib> // size_t
#include <initializer_list>

class Matrix {
private:
  double *d_data{};
  std::size_t d_nRows = 0;
  std::size_t d_nCols = 0;

public:
  Matrix();
  Matrix(std::size_t rows, std::size_t cols);
  Matrix(std::initializer_list<std::initializer_list<double>> iList);
  Matrix(Matrix const &other);
  ~Matrix();

  Matrix &operator=(Matrix const &rvalue);
  size_t nRows() const;
  size_t nCols() const;
  double *row(size_t idx);
  double *row(size_t idx) const;

private:
  void copy(Matrix const &other);
};

#endif
