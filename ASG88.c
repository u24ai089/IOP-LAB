// WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS

#include<stdio.h>

int main(){
    int arr1[] = {23,34,45,56,67,78,89,90};
    int arr2[8];
    int *ptr1 = arr1;
    int *ptr2 = arr2;

    for(int i=0 ; i<8 ; i++){
        *(ptr2+i) = *(ptr1+i);
    }

    for(int i=0 ; i<8 ; i++){
        printf("%d\t",arr2[i]);
    }
}