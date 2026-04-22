#include <stdio.h>
#include <stdlib.h>

int main(){
    float tamanho_mb, velocidade_mbps, tempo_minutos;

    printf("Digite o tamanho do arquivo (MB): ");
    scanf("%f", &tamanho_mb);

    printf("Digite a velocidade da internet (Mbps): ");
    scanf("%f", &velocidade_mbps);

    tempo_minutos = (tamanho_mb * 8) / velocidade_mbps / 60;

    printf("Tempo aproximado de download: %.2f minutos\n", tempo_minutos);

    system("PAUSE");

    return 0;

}