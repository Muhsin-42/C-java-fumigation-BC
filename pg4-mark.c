#include<stdio.h>
int main(){
    float mark;

    printf("ENTER THE MARK OF THE STUDENT : ");
    scanf("%f",&mark);

    if(mark>=50){
        printf("Passed");
    }
    else{
        printf("Failed");
    }

    return 0;
}