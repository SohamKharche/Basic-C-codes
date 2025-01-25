#include <stdio.h>
int main(){
    facto();
    return 0;
}
int facto(){
    int input;
    printf("Enter number: ");
    scanf("%d", &input);
    int i,fac = 1;
    for(i = 1; i <= input; i++){
        fac *= i;
    }
    printf("Factorial is: %d\n", fac);
    facto();
    return 0;
}