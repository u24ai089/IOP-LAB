//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.
#include<stdio.h>

void odd_even(int n);

int main(){
    int num;
    printf("Enter a number to check wheather it is even or odd : ");
    scanf("%d",&num);
    odd_even(num);
}

void odd_even(int n){
    if(n%2==0){
        printf("The number you have entered is even");
    }
    else{
        printf("The number you have entered is odd");
    }
}