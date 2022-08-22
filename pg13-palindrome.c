#include<stdio.h>
int main(){
    char str[30];
    int size=0, count=0;
    printf("Enter the string : ");
    scanf("%s",str);
    
    for(;str[size]!='\0';size++);
    
    for(int i=0, j=size-1; i<(size/2);i++,j-- )
    {
        if (str[i]!=str[j])
        {
            count++;
            break;
        }   
    }
    if(count==0)
        printf(" Entered string is a palindrome\n");
    else
        printf("Entered string is not a palindrome\n");

    return 0;
}