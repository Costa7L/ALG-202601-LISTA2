#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int fat = 1;

    printf("Digite o numero para calcular a fatorial: ");
    scanf("%d", &n);

    int original_n = n;

    if (n < 0){
        printf("Nao existe fatorial de numero negativo\n");
    }else{
        while (n > 1) {
            fat = fat * n;
            n = n - 1;
        }
        printf("O fatorial de %d e: %d\n", original_n, fat);
    }

        system("PAUSE");

        return 0;
    }