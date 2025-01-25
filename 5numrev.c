#include<stdio.h>
int main (){
    int d1,d2,d3,d4,d5,num,numrev,a,b,c,d,e;
    printf("Enter number: ");
    scanf("%d", &num);
    a = num / 10;
    d1 = num % 10;

    b = a / 10;
    d2 = a % 10;

    c = b / 10;
    d3 = b % 10;

    d = c / 10;
    d4 = c % 10;

    e = d / 10;
    d5 = d % 10;

    numrev = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5 * 1;
    printf("%d", numrev);
    if(numrev == num){
        printf("Numbers are equal (Palindrome).");
    }else{
        printf("Numbers are not equal.");
    }
    return 0;
}