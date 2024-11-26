/*WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN 
ZERO OTHERWISE.*/

#include<stdio.h>

int prime_or_not(int n){
    for(int i=2 ; i<n ; i++){
        if(n%i ==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    
}

int main(){
    int num,a=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    a = prime_or_not(num);
    printf("%d",a);
}