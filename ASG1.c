//PROGRAM TO CALCULATE SIMPLE INTEREST
#include <stdio.h>

int main()
{
    float si;
    float principal = 8925.0;
    float rate = 9.0;
    int time = 5;
    si = (principal*rate*time)/100;
    printf("The simple interest is : %.2f" , si);
    

    return 0;

    
    
}