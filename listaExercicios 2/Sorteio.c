#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, palpite, tentativas = 0;

    srand(time(NULL));
    numero = rand() % 101;

    while (palpite != numero) {
        printf("Digite um numero: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numero) {
            printf("Maior\n");
        } else if (palpite > numero){
            printf("Menor\n");
        }
    }

    printf("Acertou em %d tentativas!\n", tentativas);
    printf("O numero escolhido era: %d\n", numero);

    system("PAUSE");

    return 0;
}