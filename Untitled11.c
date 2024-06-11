#include <stdio.h>

int main() {
    float temperaturas[] = {27.5, 28, 29.7, 31.7, 25.3, 19, 16.3};
    float soma = 0;

    for (int i = 0; i < 7; i++) {
        soma += temperaturas[i];
    }

    float media = soma / 7;

    printf("A temperatura media da semana e: %.2f\n", media);

    return 0;
}
