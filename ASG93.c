// WRITE A C PROGRAM  USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.

#include<stdio.h>

int main(){
    char string[] = "I am a chapri";
    char *ptr = string;
    int spaces = 0;
    for(int i=0 ; *(ptr+i) != '\0' ; i++){
        if(*(ptr+i) == ' '){
            spaces++;
        }
    }
    printf("The number of words in the string is : %d\n",spaces+1);
}