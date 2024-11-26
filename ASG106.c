/* CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY, 
PRICE AND AMOUNT. IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY AND PRICE AS 
INPUT AND CALCULATE AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT.*/

#include<stdio.h>
struct ITEM{
    char item_name[20];
    int quantity;
    float price;
    float amount;
};

void take_reading(struct ITEM i1){
        printf("Enter name of the item : ");
        fgets(i1.item_name,20,stdin);
        printf("Enter the quantity : ");
        scanf("%d",&i1.quantity);
        printf("Enter the price : ");
        scanf("%f",&i1.price);

        i1.amount = i1.quantity * i1.price;

        printf("The amount of the item is %.2f",i1.amount);
    }

int main(){
    struct ITEM i1;
    take_reading(i1);
}
