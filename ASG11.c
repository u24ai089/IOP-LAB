//PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME
#include<stdio.h>

int main()
{
    int sec ,a,b,c,d;
    printf("Enter total second\n");
    scanf("%d" ,&sec);
    a=sec/3600;
    b=sec%3600;
    c=b/60;
    d=b%60;
    printf("Time is %d hours\n" ,a);
    printf("%d minutes\n" ,c);
    printf("%d seconds" ,d);
    return 0;



}