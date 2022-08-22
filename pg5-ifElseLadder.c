
#include<stdio.h>

int main(){
    float totalMark;

    printf("ENTER MARK OF THE STUDENT : ");
    scanf("%f",&totalMark);

    if(totalMark >= 90)
        printf("GRADE = A \n");
    else if(totalMark >= 80)
        printf("GRADE = B\n");
    else if(totalMark >= 70)
        printf("GRADE = C \n");
    else if(totalMark >= 60)
        printf("GRADE = D \n");
    else if(totalMark >= 50)
        printf("GRADE = E \n");
    else
        printf("GRADE = FAIL \n");

    return 0;
}