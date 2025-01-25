#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    for(i = 1; i < n; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    printf("Largest number = %d\n", largest);
    for(i = 0; i < n; i++){
        if(arr[i] == largest){
            arr[i] = 0;
        }
    }
    int largest2 = arr[0];
    for(i = 1; i < n; i++){
        if(largest2 < arr[i]){
            largest2 = arr[i];
        }
    }
    printf("2nd largest number = %d\n", largest2);
    return 0;
}