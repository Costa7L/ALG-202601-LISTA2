#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2, n3;
    float media;

    printf("Informe tres numeros inteiros:\n ");
    scanf("%d %d %d", &n1, &n2, &n3);

    media = (float)(n1 + n2 + n3) / 3;

    printf("A media entre os numeros %d, %d e %d é %.2f\n", n1, n2, n3, media);

    system("PAUSE");

    return 0;
}