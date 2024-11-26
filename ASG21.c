/*PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK (USING ARITHMETIC 
OPERATOR)AND THIS PERFORM USING SWITCH-CASE.(CASE IN CHAR FORM)*/
#include <stdio.h>

int main() {

  char ch;
  float a, b;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &ch);
  printf("Enter two operands: ");
  scanf("%f %f", &a, &b);

  switch(ch){

        case '+':
        printf("The sum is : %.2f" ,a+b);
        break;
        case '-':
        printf("The answer is : %.2f",a-b);
        break;
        case '*':
        printf("The answer is : %.2f",a*b);
        break;
        case '/':
        printf("The answer is : %.2f",a/b);
        break;
        default :
        printf("Wrong operation");
    }

    return 0;

}