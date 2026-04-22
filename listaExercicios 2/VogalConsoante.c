#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra;

    printf("Digite apenas uma letra: ");
    scanf("%c", &letra);

    if(letra == 'a' ||letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("É uma vogal\n");
    } else {
        printf("É uma consoante\n");
    }

    system("PAUSE");

    return 0;
}