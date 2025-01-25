#include<stdio.h>
int main(){
    char c;
    int i;
    printf("Enter character: ");
    scanf("%c", &c);
    i = c;
    if(i >= 48 && i <= 57){
        printf("Character is a number.");
    }else if(i >= 65 && i <= 90){
        printf("Character is a capital letter.");
    }
    else if(i >= 97 && i <= 122){
        printf("Character is a small letter.")
    }     
    else{
        printf("Character is a special character.");
    }
    return 0;

}