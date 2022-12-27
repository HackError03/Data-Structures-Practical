#include <stdio.h>

#define N 3  // size of the matrices

int main() {
  int A[N][N] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
  int B[N][N] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
  int C[N][N];  // result matrix

  // Initialize the result matrix to all zeros
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      C[i][j] = 0;
    }
  }

  // Perform matrix multiplication
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < N; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  // Print the result matrix
  printf("Resulting matrix:\n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
