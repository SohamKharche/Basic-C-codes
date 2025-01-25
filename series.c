#include <stdio.h>
int main(){
    int i;
    i = 2;
    while (i < 100){
        printf("%d\n", i);
        i = i + 3;
    }
    return 0;

}
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
#include <stdio.h>
int main(){
    int i;
    for(i = 2; i < 100; i += 3){
        printf("%d\n", i);
    }
    return 0;
}