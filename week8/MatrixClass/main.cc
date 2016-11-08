#include "matrix/matrix.h"
#include <cstring>
#include <iostream>

using namespace std;

// void toIdentity(Matrix *mat) { *mat = Matrix::identity(mat->nCols()); }

void printMatrix(Matrix &mat2){
for (size_t row = 0; row < mat2.nRows(); ++row) {
    for (double *el = mat2.row(row); el != mat2.row(row) + mat2.nCols(); ++el)
      cout << *el << ' ';
    cout << '\n';
  }
 cout << '\n';
}

int main() {

  // Matrix mat({{1.0, 2.0, 3.0},
              // {10.0, 20.0, 30.0},
              // {100.0, 200.0, 300.0},
              // {1000.0, 2000.0, 3000.0}});
			  
			  
  // exercise 67
  // ===========		
  
  Matrix mat(4, 6);
  mat[2][3] = 23.5;  
  memcpy(mat[1], mat[2], 6 * sizeof(double));
  
  printMatrix(mat);
  
  
  // exercise 68
  // ===========

   Matrix mat1(4, 8);
   Matrix mat2(4, 8);
   
   mat1[2][3] = 23.5;
   mat2[2][3] = 25;
   
   mat1 += mat2;
   
   Matrix const mat3(mat1 + mat2);

   Matrix mat4 = mat3;

   mat4 = mat1 + mat2 + mat3;

   mat1 += mat2 += mat2 += mat3;
   
   printMatrix(mat1);
   
  // exercise 70
  // ===========

   Matrix mat11(4, 8);
   Matrix const mat22(4, 8);
   
   mat11[2][3] = 23.5;
   // mat22[2][3] = 25;
   
   if(mat11 == mat22)
	   cout << "equality!\n";
   if(mat11 != mat22)
	   cout << "inequality!\n";
   
  //
  // cout << '\n';
  // mat = mat.transpose();
  //
  // printMatrix(mat);
  //
  // // cout << '\n';
  // Matrix mat44 = Matrix::identity(3);

  // printMatrix(mat44);
}
