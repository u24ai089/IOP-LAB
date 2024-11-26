/*READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A 
LIST OF NUMBERS READ.*/
#include<stdio.h>

int main(){
    int n;
    int a=0;
    do{
        printf("Enter a number : ");
        scanf("%d" ,&n);
        if(n<0){
            break;
        }
        a=a+n;
    }while(1);


    printf("The sum of the positive numbers is :%d" ,a);

    return 0;
}