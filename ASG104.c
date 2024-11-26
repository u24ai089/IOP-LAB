/*AN ENUMERATION WITH COLOR NAMES CAN BE USED IN A SWITCH STATEMENT TO DISPLAY 
THE HEXADECIMAL COLOR CODE*/

#include<stdio.h>

enum { RED , GREEN , BLUE , YELLOW , BLACK , WHITE};
int main(){
    int n;
    printf("Enter a color (0-RED) ; (1-GREEN) ; (2-BLUE) ; (3-YELLOW) ; (4-BLACK) ; (5-WHITE) - ");
    scanf("%d",&n);
    switch (n){
        case RED :
        printf("Color : RED , Code : #FF0000");
        break;
        case GREEN :
        printf("Color : GREEN , Code : #00FF00");
        break;
        case BLUE :
        printf("Color : BLUE , Code : #0000FF");
        break;
        case YELLOW :
        printf("Color : YELLOW , Code : #FFFF00");
        break;
        case BLACK :
        printf("Color : BLACK , Code : #000000");
        break;
        case WHITE :
        printf("Color : WHITE , Code : #FFFFFF");
        break;
        default :
        printf("Invalid color");
    } 
}