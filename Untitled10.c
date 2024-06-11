#include <stdio.h>

int main () {
    int numeros[10];
    int soma = 0;

    // Preenchendo o array com números de 1 a 10
    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }

    // Calculando a soma de todos os números do array
    for (int i = 0; i < 10; i++) {
        soma += numeros[i];
    }

    // Calculando a média dos números
    float media = (float)soma / 10;

    // Exibindo a média
    printf("A média dos números do array é: %.2f\n", media);

    return 0;
}
