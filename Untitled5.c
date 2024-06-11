#include <stdio.h>

int main (){
    int num[10];

    for(int i = 0; i < 10; i++){
        num[i] = i;
    }

    for(int i = 0; i < 10; i++){
        if(num[i] % 2 == 0){
            printf("%d\n", num[i]);
        }
    }
}
