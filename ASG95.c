/*WRITE A  C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER 
,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE  A STRUCTURE POINTER AND AN 
ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND 
PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY. */

#include<stdio.h>

struct employee{
    int employee_number;
    char employee_name[30];
    float basic_pay;
};
int main(){
    struct employee employ[50];
    struct employee *ptr = employ;
    int employee_num;
    printf("Enter the number of employee datails you want to enter : ");
    scanf("%d",&employee_num);
    for(int i=0 ; i<employee_num ; i++){
        printf("Enter the name of employee %d\n",i+1);
        scanf("%s",&(ptr+i)->employee_name);
        printf("Enter the number of employee %d\n",i+1);
        scanf("%d",&(ptr+i)->employee_number);
        printf("Enter the basic pay of employee %d\n",i+1);
        scanf("%f",&(ptr+i)->basic_pay);
    }
    for(int i=0 ; i<employee_num ; i++){
        printf("For employee %d\n",i+1);
        printf("Name : %s\n",(ptr+i)->employee_name);
        printf("Basic pay is %.2f",(ptr+i)->basic_pay);
        printf("\n");
    }
}