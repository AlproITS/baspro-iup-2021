#include <stdio.h>

int main()
{
    float grade;
    
    scanf("%f",&grade);
    
    if(grade >= 86 && grade <= 100){
        printf("A");
    }
    else if(grade >= 76 && grade < 86){
        printf("AB");
    }
    else if(grade >= 66 && grade < 76){
        printf("B");
    }
    else if(grade >= 61 && grade < 66){
        printf("BC");
    }
    else if(grade >= 56 && grade < 61){
        printf("C");
    }
    else if(grade >= 41 && grade < 56){
        printf("D");
    }else if(grade < 41 && grade >= 0){
        printf("E");
    }else{
        printf("Out of bound");
    }
}
