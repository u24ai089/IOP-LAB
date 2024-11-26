//PROGRAM TO SWAP TWO VARIABLES WITHOUT USING A THIRD VARIABLE
#include <stdio.h>
int main()
{
    int a=89 ,b=98;
    a=a+b;
    b=a-b;
    a=a-b;

    
    printf("The value of a is : %d\n" ,a);
    printf("The value of b is : %d" ,b);
    return 0;




}