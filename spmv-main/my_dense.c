#include "spmv.h"

int my_dense(const unsigned int n, const double mat[], double vec[], double result[])
{
  // Initialize the result vector to 0
  for (unsigned int i = 0; i < n; i++) {
    result[i] = 0.0;  // Initialize each element in the result vector
  }

  // Perform matrix-vector multiplication
  for (unsigned int i = 0; i < n; i++) {  // Loop over each row of the matrix
    for (unsigned int j = 0; j < n; j++) {  // Loop over each column in the row
      result[i] += mat[i * n + j] * vec[j];
      // mat[i * n + j] accesses the element in row i, column j of the matrix
    }
  }

  return 0;  // Success
}