/*WRITE A PROGRAM IN C FOR THE FOLLOWING.
 AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS 
 FOLLOWS.*/
#include<stdio.h>

int main(){
    float unit,a,b,c;
    printf("Enter the electric consumption in unit : ");
    scanf("%f" ,&unit);

    if(unit>=0&&unit<=200){
        printf("The total amount(in rupees) to be paid is :%.2f\n" ,unit*0.50);
    }
    else if(unit>200&&unit<=400){
        a=100+0.65*(unit-200);
        printf("The total amount(in rupees) to be paid is :%.2f\n" ,a);
    }
    else if(unit>400&&unit<=600){
        b=230+0.80*(unit-400);
        printf("The total amount(in rupees) to be paid is :%.2f\n" ,b);
    }
    else if(unit>600){
        c=425+125*(unit-600);
        printf("The total amount(in rupees) to be paid is :%.2f\n" ,c);
    }

    printf("Thank You");

    return 0;
}