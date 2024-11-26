/*WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY 
X AND Y */

#include<stdio.h>

int swap_number(int x,int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("x : %d and y : %d\n",x,y);
}
int main(){
    int x,y;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);
    swap_number(x,y);
}