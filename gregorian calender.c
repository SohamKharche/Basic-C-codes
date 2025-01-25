#include <stdio.h>
int main(){
    int year,input,point;
    printf("Enter year\n");
    scanf("%d", &year);
    point = year - 2000;
    input = point % 7;
    switch(input){
        case 1:
           printf("1st day is Monday");
           break;
        case 2:
           printf("1st day is Tuesday");
           break;
        case 3:
           printf("1st day is Wednesday");
           break;
        case 4:
           printf("1st day is Thursday");
           break;
        case 5:
           printf("1st day is Friday");
           break;
        case 6:
           printf("1st day is Saturday");
           break;
        case 0:
           printf("1st day is Sunday");
           break;
        default:
           break;
    } 
}