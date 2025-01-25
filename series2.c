#include <stdio.h>
int main(){
    int i;
    i = 2;
    do{
        printf("%d\n", i);
        i += 3;
    }while(i < 100);
    return 0;
}