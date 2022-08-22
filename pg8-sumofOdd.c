#include<stdio.h>
int main(){
    int limit, sum = 0;
    printf(" Enter a limit : ");
    scanf("%d",&limit);

    for(int i = 1; i<=limit; i++){
        if(i%2!=0)
            sum += i;
    }

    printf(" Sum of Odd numbers = %d ",sum);
    return 0;
}