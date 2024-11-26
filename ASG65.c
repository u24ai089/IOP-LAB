// PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE.
#include<stdio.h>
int main(){
    int arr[3][3],transpose[3][3];
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            printf("Row %d ,Column %d : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            transpose[j][i]=arr[i][j];
        }
    }
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}    