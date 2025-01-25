#include <stdio.h>
int main(){
    int i,j,k;
    for(i = 65; i <= 71; i++){
        printf("%c",i);
    }
    for(i = 70; i >= 65; i--){
        printf("%c",i);
    }
    printf("\n");
    for(i = 1;i <= 6;i++){
        for(j = 65;j <= 71 - i;j++){
            printf("%c",j);
        }
        for(k = 0;k < 2 * i - 1;k++){
            printf(" ");
        }
        for(j = 71 - i;j >= 65;j--){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;

}