#include <stdio.h>
#include <stdlib.h>

int main(){

    float peso, altura, imc;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu imc é: %.2f\n", imc);

    system("PAUSE");

    return 0;
}