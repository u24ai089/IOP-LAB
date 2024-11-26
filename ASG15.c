//PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND GIVE DIVISION

#include <stdio.h>

int main()
{
    float eng, phy, chem, math, hin; 
    float total, per;
    printf("Enter marks of five subjects: \n");
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &hin);
    total = eng + phy + chem + math + hin;
    per = (total / 500.0) * 100;
    

    if(per>=95&&per<=100){
        printf("you get A+ grade");
    }
    if(per>=90&&per<95){
        printf("you get A grade");
    }
    else if(per>=80&&per<90){
        printf("You get B grade");
    }
    else if(per>=70&&per<80){
        printf("you get C grade");
    
    }
    else if(per>=60&&per<70){
        printf("You get D grade");
    }
    else if(per>=30&&per<=60){
        printf("you get E grade");
    }
    else if(per<30){
        printf("You failed");
    }
return 0;
}