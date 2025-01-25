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
    for(j = n-1; j >= 0; j--){
        printf("%d ", arr[j]);
    }
    return 0;
}