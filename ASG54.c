// PROGRAM TO RED AND ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS.
#include<stdio.h>
int main(){
    int arr[10],sum=0;

    for(int i=0 ; i<10 ; i++){
        printf("Enter number %d\n" ,i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

    printf("sum is %d",sum);
    return 0;
}