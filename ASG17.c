//PROGRAM TO READ THREE NOS AND PRINT MAX USING LOGICAL OPERATOR(&&).
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the three nos\n");
    scanf("%d%d%d" ,&a ,&b ,&c);
    if(a>b&&a>c){
        printf("%d is max" ,a);
    }
    else if(b>a&&b>c){
        printf("%d is max" ,b);
    }
    else{
        printf("%d is max" ,c);
    }

    return 0;


}