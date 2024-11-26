//PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE 
//ARRAYS.
#include<stdio.h>
int main(){
    int arr1[10],arr2[10],arr3[10];
    for(int i=0 ; i<10 ; i++){
        printf("Enter number %d of 1st array : ",i+1);
        scanf("%d",&arr1[i]);
    }
    for(int j=0 ; j<10 ; j++){
        printf("Enter number %d of 2nd array : ",j+1);
        scanf("%d",&arr2[j]);
    }
    for(int k=0 ; k<10 ; k++){
        arr3[k] = arr1[k];
        arr1[k] = arr2[k];
        arr2[k] = arr3[k];
    }
    printf("1st array :\n");
    for(int l=0 ; l<10 ; l++){
        printf("%d\t",arr1[l]);
    }
    printf("\n");
    printf("2nd array :\n");
    for(int m=0 ; m<10 ; m++){
        printf("%d\t",arr2[m]);
    }


    return 0;
}