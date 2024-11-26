//WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS. 

#include<stdio.h>

int main(){
    int arr[] = {46,79,13,47,69,14,47,66,49,29};
    int *ptr = arr;
    int zero = 0;
    int *max = &zero;
    for(int i=0 ; i<10 ; i++){
        if(*(ptr+i)>*max){
            max = &arr[i];
        }
    }
    printf("The biggest of the given list of numbers is : %d",*max);
}