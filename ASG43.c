/*WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES 
REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW.*/
#include<stdio.h>

int main(){
    int amt;
    float a,b;
    printf("Enter sales amount : ");
    scanf("%d" ,&amt);

    if(amt<=500){
        printf("The commission amount is : %.2f\n" ,(0.05*amt));
    }
    else if(amt>500&&amt<=2000){
        a=35+(0.10*amt);
        printf("The commission amount is : %.2f\n" ,a);
    }
    else if(amt>2000&amt<=5000){
        b=185+(0.12*amt);
        printf("The commission amount is : %.2f\n" ,b);
    }
    else if(amt>5000){
        printf("The commission amount is : %.2f\n" ,(0.125*amt));
    }

    printf("Thank You");

    return 0;
}