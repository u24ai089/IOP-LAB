//PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES.

#include <stdio.h>

int main()
{
    float feh ,cel;
    feh = 202.6;
    cel = (0.555555556*feh)-32;
    printf("Temperature in celcius is : %.2f" ,cel);
    
    return 0;
}
