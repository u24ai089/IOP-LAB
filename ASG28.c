//PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT
#include<stdio.h>
int main(){
    int n ,a,b,sum=0,input_number;
    printf("Enter a number : ");
    scanf("%d" ,&n);
    input_number=n;
    while(input_number!=0){
        a=input_number%10;
        b=a*a*a;
        sum=sum+b;
        input_number=input_number/10;
    }

    if(sum==n){
        printf("The number is an armstrong number");
    }

    else if(sum!=n){
        printf("The number is not an armstrong number");
    }


    return 0;
}