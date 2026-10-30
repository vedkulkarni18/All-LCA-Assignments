#include <stdio.h>

int main()
{
  int rows = 2, cols = 3;
  int matrix1[2][3], matrix2[2][3], sum[2][3];
  
  printf("Enter first matrix elements: \n");
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
       scanf("%d", &matrix1[i][j]);
    }
  }
  
  printf("Enter second matrix elements: \n");
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
       scanf("%d", &matrix2[i][j]);
    }
  }
  
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }
  
  printf("Addition of two matrices is: \n");
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
