#include <stdio.h>

int size;
void getArray(int arr[]);
void displayArray(int arr[]);

int main(){
    int arr[30];
    getArray(arr);
    displayArray(arr);
}


void getArray(int arr[]){
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("Enter the values of array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}
void displayArray(int arr[]){
    printf("\n The array values %d : ",size);
    for (int i = 0; i < size; i++)
    {
        printf(" %d ",arr[i]);
    }
}