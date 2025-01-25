#include<stdio.h>
#include<math.h>
int main(){
    power();
    return 0;
}
int power(){
    int num,output,exp;
    printf("Enter number\n");
    scanf("%d", &num);
    printf("Enter exp\n");
    scanf("%d", &exp);
    output = pow(num,exp);
    printf("The result is %d.\n", output);
    power();
    return 0;
}