//PROGRAM TO READ A 3*3 MATRIX AND ADD THEIR VALUE AND STORE THEM IN 
//THIRD MATRIX
#include <stdio.h>
int main() {
  int a[3][3], b[3][3], sum[3][3];

  printf("\nEnter elements of 1st matrix:\n");
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++) {
      printf("Row %d ,Column %d : ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++) {
      printf("Row %d ,Column %d : ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  printf("\nSum of two matrices: \n");
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++) {
      printf("%d   ", sum[i][j]);
      if (j == 2) {
        printf("\n");
      }
    }

  return 0;
}
