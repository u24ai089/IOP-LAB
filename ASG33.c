//PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS.
#include<stdio.h>
int main(){
    int N ,max=0 ,min=999 ,t;
    printf("Enter the number of numbers you want to enter : ");
    scanf("%d" ,&N);
    for(int i=1 ; i<=N ; i++){
        printf("Enter number %d\n" ,i);
        scanf("%d" ,&t);

        if(t>max){
            max = t;
        }
        if(t<min){
            min = t;
        }
    }


    printf("The maximum number among these %d numbers is %d\n" ,N ,max);
    printf("The minimum number among these %d numbers is %d" ,N ,min);


    return 0;
}