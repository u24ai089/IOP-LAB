//WRITE A  C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE

#include<stdio.h>
int main(){
    FILE *ptr = fopen("file99.txt","r");
    char ch;
    int count_char=0,count_word=0,count_line=0;
    while((ch=fgetc(ptr)) != EOF){
        count_char ++;
        if(ch == ' '){
            count_word ++;
        }
        if(ch == '\n'){
            count_line ++;
        }
    }

    fclose(ptr);

    printf("The number of characters is %d\n",count_char - count_line);
    printf("The number of words is %d\n",count_word+count_line+1);
    printf("The number of lines is %d",count_line+1);
}