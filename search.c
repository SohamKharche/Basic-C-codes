// Online C compiler to run C program online
#include<stdio.h>
int main(){
    int search,target;
    printf("Enter number to find\n");
    scanf("%d", &target);
    printf("Enter type of search:\n");
    printf("1.Linear Search\n");
    printf("2.Binary Search\n");
    scanf("%d", &search);
    switch(search){
        case 1:
          linear(target);
          break;
        case 2:
          binary(target);
          break;
        default:
          printf("Invalid choice.");
          break;
    }
    return 0;
}
int linear(int target){
  int i,detect;
  int arr[5] = {22,44,55,66,43};
  for(i = 0;i < 5;i++){
    if(arr[i] == target){
      printf("Number found. Index of number in array is %d", i + 1);
      detect += 1; /*detector to print output*/
    } 
  }
  if(detect == 0){
    printf("Number not found");
  }
  return 0;
}
int binary(int target){
  int low = 0, mid, high = 4;
  int arr[5] = {22,44,55,66,43};
  int temp, i, j, n;
  int detect = 0;
  /*Sorting the array*/
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5 - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  while (low <= high) {
    mid = (low + high) / 2;
    if (arr[mid] == target) {
      detect = 1;
      break;
    } else if (arr[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  if (detect == 1) {
    printf("Number found. Index is %d", mid + 1);
  } else {
    printf("Number not found.");
  }

  return 0;
}
