/*WRITE A PROGRAM  TO COPY  ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF 
SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY. */

#include<stdio.h>

int main(){
    int arr1[] = {23,34,45,56,67,78,89,90};
    int arr2[8];
    int *ptr1 = arr1;
    int *ptr2 = arr2;

    for(int i=0,j=7 ; i<8,j>=0 ; i++,j--){
        *(ptr2+i) = *(ptr1+j);
    }

    for(int i=0 ; i<8 ; i++){
        printf("%d\t",arr2[i]);
    }
}