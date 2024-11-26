// WRITE A C PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.DAT”

#include<stdio.h>
int main(){
    FILE *ptr = fopen("lnmiitstudent.dat","a");
    char text[50] = "\nHEllo I am under the water";
    fputs(text,ptr);
    fclose(ptr);
}