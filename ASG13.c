//PROGRAM TO CHECK WHEATHER A NUMBER IS EVEN OR ODD
#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d" ,&num);

    if(num%2==0){
        printf("The number is even");
    
    }
    else{
        printf("The number is odd");
    }
    return 0;


}