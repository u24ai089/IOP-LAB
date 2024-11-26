// PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS.
#include<stdio.h>
int main(){
    int arr[3][3],sumr1=0,sumr2=0,sumr3=0;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            printf("Row %d ,Column %d : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0 ; i<3 ; i++){
        sumr1+=arr[0][i];
    }
    for(int i=0 ; i<3 ; i++){
        sumr2+=arr[1][i];
    }
    for(int i=0 ; i<3 ; i++){
        sumr3+=arr[2][i];
    }
    printf("Sum of elements of row 1 is :%d\n",sumr1);
    printf("Sum of elements of row 2 is :%d\n",sumr2);
    printf("Sum of elements of row 3 is :%d",sumr3);
    return 0;
}