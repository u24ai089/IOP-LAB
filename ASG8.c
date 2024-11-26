//EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS
#include<stdio.h>

int main()
{
    int a , b , c ,d ,e;
    a= 31558150/86400;
    b= 31558150%86400;
    c= b/3600;
    d=b%3600;
    e=d/60;
    printf("Days : %d\n" ,a);
    printf("Hours : %d\n" ,c);
    printf("Mins : %d" ,e);
    return 0;




}