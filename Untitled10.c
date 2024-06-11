#include <stdio.h>

int main () {
    int numeros[10];
    int soma = 0;

    // Preenchendo o array com n�meros de 1 a 10
    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }

    // Calculando a soma de todos os n�meros do array
    for (int i = 0; i < 10; i++) {
        soma += numeros[i];
    }

    // Calculando a m�dia dos n�meros
    float media = (float)soma / 10;

    // Exibindo a m�dia
    printf("A m�dia dos n�meros do array �: %.2f\n", media);

    return 0;
}
