/*.WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING 
POINTERS.*/

#include<stdio.h>
#include<string.h>

int main(){
    char st[50];
    char reversed[50];
    char *ptr1 = st;
    char *ptr2 = reversed;
    printf("Enter a string : ");
    scanf("%s",&st);
    int i,j;
    for(i=0,j=strlen(st)-1 ; i<strlen(st),j>=0 ; i++,j--){
        *(ptr2 + strlen(st)-i-1) = *(ptr1 + i);
    }
    *(ptr2 + i) = '\0';
    printf("Reversed string is : %s",reversed);
}