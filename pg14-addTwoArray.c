// Program to add 2 arrays

#include<stdio.h>
int main(){
    int arr1[10][10], arr2[10][10], sum[10][10];
    int size;
    printf(" Enter size of the arrays : ");
    scanf("%d",&size);

    printf(" Enter the values of array1 : \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            scanf(" %d",&arr1[i][j]);
    }
    printf("\n Enter the values of array 2 : \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf(" %d",&arr2[i][j]);
            sum[i][j] = arr1[i][j] + arr2[i][j];       // adding the arrays  
        }
    }
    //Displaying sum
    printf("\n Sum of 2 array is : \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            printf(" %d ",sum[i][j]);
        printf("\n");
    }
    return 0;
}