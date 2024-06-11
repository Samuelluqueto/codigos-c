#include <stdio.h>

int main (){
    int numeros[10], soma = 0;

    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        soma += numeros[i];
    }

    printf("Soma igual a: %d\n", soma);

    return 0;
}
