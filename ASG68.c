//PROGRAM TO READ A 3*3 MATRIX AND MULTIPLY THEIR VALUE AND STORE THEM 
//IN THIRD MATRIX
#include <stdio.h>
int main() {
  int a[3][3], b[3][3];
  int pro[3][3] = { {0,0,0},{0,0,0},{0,0,0} };

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
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            pro[0][i]=pro[0][i] + (a[0][j]*b[j][i]);
        }
    }
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            pro[1][i]=pro[1][i] + (a[1][j]*b[j][i]);
        }
    }
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            pro[2][i]=pro[2][i] + (a[2][j]*b[j][i]);
        }
    }
    printf("The product of the two matrices is : \n");
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            printf("%d\t",pro[i][j]);
        }
        printf("\n");
    }
}