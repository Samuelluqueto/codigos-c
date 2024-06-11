#include <stdio.h>

int main (){
 int numeros[10];
 int i,maior;

    for (i = 0; i < 10; i++) {
    numeros[i] = i +1;
    }

    maior = numeros[0];
    for (i = 1; i < 10; i++) {
    if (numeros[i] > maior) {
        maior = numeros[i];
    }
}

printf(" %d", maior);
}
