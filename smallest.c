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
    int smallest = arr[0];
    for(i = 1; i < n; i++){
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }
    printf("Smallest number = %d\n", smallest);
    return 0;
}