//PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE.

#include <stdio.h>

int main() {

  char op;
  float a, b;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%f %f", &a, &b);

  switch(op){

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
