#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <cstdlib> // size_t
#include <initializer_list>
#include <iostream>

class Matrix {
private:
  double *d_data = nullptr;
  std::size_t d_nRows = 0;
  std::size_t d_nCols = 0;

public:
  Matrix() = default;
  Matrix(std::size_t rows, std::size_t cols);
  Matrix(std::initializer_list<std::initializer_list<double>> iList);
  Matrix(Matrix const &other);
  ~Matrix();

  Matrix &operator=(Matrix const &rvalue);
  size_t nRows() const;
  size_t nCols() const;
  double *row(size_t idx);
  double *row(size_t idx) const;
  static Matrix identity(size_t dim);
  Matrix &tr();
  Matrix transpose();
  
  // exercise 67
  // ===========
  double *operator[](int value);
  double const *operator[](int value) const;
  
  // exercise 68
  // ===========
  Matrix operator+(Matrix const &mat);
  Matrix operator+=(Matrix const &mat);
  
  // exercise 70
  // ===========
  bool operator==(Matrix const &mat);
  bool operator!=(Matrix const &mat);

private:
  void copy(Matrix const &other);
  double *safeRow(size_t idx) const;
  void trCopy(double *dataPtr);
};

#endif
