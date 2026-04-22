#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, maior;
    int mmc = maior;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro valor inteiro: ");
    scanf("%d", &num2);

    if ( num1 > num2){
        maior = num1;
    } else {
        maior = num2;
    }

    mmc = maior;

    while (mmc % num1 != 0 || mmc % num2 != 0){
        mmc += maior;
    }
    printf("MMC: %d\n", mmc);

    system("PAUSE");

    return 0;
}