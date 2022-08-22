//Sorting an array

#include<stdio.h>
int main(){
    int arr[30];
    int size, temp = 0;
    printf("Enter the size of an arrays : ");
    scanf("%d",&size);

    //Accepting array values
    printf("Enter values of the array : ");
    for(int i = 0; i< size; i++){
        scanf("%d",&arr[i]);
    }

    // Sorting 
    for(int i = 0; i<size-1; i++)
    {
        for(int j = i+1; j<size ; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];      
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //Displaying sorted array
    printf("Sorted array = ");
    for(int i = 0; i< size; i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}