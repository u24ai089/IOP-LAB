/*WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES 
USING POINTERS. */

#include<stdio.h>

int main(){
    char string[] = "I am a chapri";
    char *ptr = string;
    int count = 0,spaces = 0;
    for(int i=0 ; *(ptr+i) != '\0' ; i++){
        if(*(ptr+i) == ' '){
            spaces++;
        }
        count++;
    }
    printf("The length of the string including spaces is : %d\n",count);
    printf("The length of the string excluding spaces is : %d",(count-spaces));
}