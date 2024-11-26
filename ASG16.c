//PROGRAM TO READ THREE NOS AND PRINT MAX.
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the three nos\n");
    scanf("%d%d%d" ,&a ,&b ,&c);
    if(a>b){
        if(a>c){
            printf("%d is max" ,a);
        }
    }
    if(b>a){
        if(b>c){
            printf("%d is max" ,b);
        }
    }
    if(c>a){
        if(c>b){
            printf("%d is max" ,c);
        }
    }

    return 0;


}