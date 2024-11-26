//PROGRAM to CALCULATE GROSS SALARY
#include<stdio.h>
int main(){
    float basic_salary ,petrol_allowance , medical_insaurance , gross_salary;

    printf("Enter the basic salary : ");
    scanf("%f" ,&basic_salary);
    petrol_allowance = (0.05*basic_salary);
    medical_insaurance = 2000;

    gross_salary = basic_salary + petrol_allowance + medical_insaurance;

    printf("Gross salary is %.2f" ,gross_salary);

    return 0;
}