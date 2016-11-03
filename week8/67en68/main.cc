#include "matrix/matrix.h"
#include <cstring>
#include <iostream>

using namespace std;

// void toIdentity(Matrix *mat) { *mat = Matrix::identity(mat->nCols()); }

int main() {

  // Matrix mat({{1.0, 2.0, 3.0},
              // {10.0, 20.0, 30.0},
              // {100.0, 200.0, 300.0},
              // {1000.0, 2000.0, 3000.0}});
			  
			  
  // exercise 67
  // ===========		
  
  // Matrix mat(4, 6);
  // mat[2][3] = 23.5;  
  // memcpy(mat[1], mat[2], 6 * sizeof(double));
  
  
  // exercise 68
  // ===========

   Matrix mat1(4, 8);
   Matrix mat2(4, 8);
   
   mat1[2][3] = 23.5;
   mat2[2][3] = 25;
   
   mat1 += mat2;

   Matrix mat3(mat1 + mat2);

   Matrix mat4 = mat3;

   mat4 = mat1 + mat2 + mat3;

   mat1 += mat2 += mat2 += mat3;
		
  //
  //
  for (size_t row = 0; row < mat2.nRows(); ++row) {
    for (double *el = mat2.row(row); el != mat2.row(row) + mat2.nCols(); ++el)
      cout << *el << ' ';
    cout << '\n';
  }
  //
  // cout << '\n';
  // mat = mat.transpose();
  //
  // for (size_t row = 0; row < mat.nRows(); ++row) {
  //   for (double *el = mat.row(row); el != mat.row(row) + mat.nCols(); ++el)
  //     cout << *el << ' ';
  //   cout << '\n';
  // }
  //
  // // cout << '\n';
  // Matrix mat44 = Matrix::identity(3);

  // for (size_t row = 0; row < mat44.nRows(); ++row) {
    // for (double *el = mat44.row(row); el != mat44.row(row) + mat44.nCols();
         // ++el)
      // cout << *el << ' ';
    // cout << '\n';
  // }
}
