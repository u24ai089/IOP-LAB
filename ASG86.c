//WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT.

#include<stdio.h>

void identify_vowel(char c){
    if(c==97||c==101||c==105||c==111||c==117){
        printf("You have entered a vowel");
    }
    else{
        printf("You have not entered a vowel");
    }
}
int main(){
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    identify_vowel(c);
}