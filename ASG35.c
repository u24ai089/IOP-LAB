//READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N
#include<stdio.h>
int main(){
    int n,sum1=0,remainder1,sum2=0,remainder2,sum3 =0,remainder3;
    printf("Enter a number : ");
    scanf("%d" ,&n);
    while(n!=0){
        remainder1=n%10;
        sum1=sum1+remainder1;
        n=n/10;
    }
    
    while(sum1!=0){
        remainder2=sum1%10;
        sum2 = sum2 + remainder2;
        sum1/=10;
    }

    while(sum2!=0){
        remainder3=sum2%10;
        sum3 = sum3 + remainder3;
        sum2/=10;
    }
    
    printf("The single digit integer is %d",sum3);
    return 0;
}
