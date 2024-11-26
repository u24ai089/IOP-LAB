/*WRITE A C PROGRAM TO FIND THE PRODUCT OF 2 MATRICES USING POINTER USING DYNAMIC 
MEMORY ALLOCATION*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int (*arr1)[3] = calloc(3, sizeof *arr1);
    int (*arr2)[3] = calloc(3, sizeof *arr2);
    int (*product)[3] = calloc(3, sizeof *product);
    
    int count1 = 0;
    int count2 = 9;

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            arr1[i][j] = count1 ++;
        }
    }
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            arr2[i][j] = count2 --;
        }
    }

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            for(int k=0 ; k<3 ; k++){
                product[i][j] += (arr1[i][k] * arr2[k][j]);
            }
        }
    }

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            printf("%d",product[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    free(arr1);
    free(arr2);
    
    return 0;
}