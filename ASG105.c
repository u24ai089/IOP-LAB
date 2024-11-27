/* WRITE A PROGRAM IN C TO PRINT ALL PERMUTATIONS OF A GIVEN STRING USING POINTERS. 
THE PERMUTATIONS 
OF THE STRING ARE: ABCD ABDC ACBD ACDB ADCB ADBC BACD BADC BCAD BCDA BDCA BDAC CBAD 
CBDA 
CABD CADB CDAB CDBA DBCA DBAC DCBA DCAB DACB DABC*/

#include<stdio.h>
#include<string.h>
void swap(char *x , char *y){
    char temp;
    temp = *x;
    *x=*y;
    *y=temp;
}
void permutate(int l,int r,char *string){
    int i;
    if(l == r){
        printf("%s\n",string);
        return;
    }
    else{
        for(i=l ; i<=r ; i++){
            swap((string+l),(string+i));
            permutate(l+1,r,string);
            swap((string+l),(string+i));
        }
    }
}
int main(){
    char string[10];
    printf("Enter a string : ");
    scanf("%s",&string);
    int r = strlen(string) - 1;
    permutate(0,r,string);
}
