//PROGRAM TO READ TIME IN HOUR,MINUTE AND SECOND AND CONVERT IT INTO TOTAL SECONDS.
#include<stdio.h>

int main(){

  int hour,min,sec,total;
  printf("Enter the time in hh-mm-ss format\n");
  scanf("%d%d%d" ,&hour ,&min ,&sec);
  total = (hour*3600)+(min*60)+sec;
  printf("The total in seconds is : %d" ,total);

  return 0;




}