//. PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.
#include<stdio.h>

int main()
{
    int n;
    int SumOdd=0;
    int SumEven=0;
    printf("Enter a number : ");
    scanf("%d" ,&n);

    for(int i=n ; i>=1 ; i--){
        if(i%2==0){
            continue;
        }
        else{
            SumOdd+=i;
        }
    }
     for(int i=n ; i>=1 ; i--){
        if(i%2!=0){
            continue;
        }
        else{
            SumEven+=i;
        }
    }

    printf("Sum of odd nos is %d\n" ,SumOdd);
    printf("Sum of even nos is %d\n" ,SumEven);


    return 0;


}