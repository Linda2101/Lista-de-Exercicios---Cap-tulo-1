#include <stdio.h>
int main() {
    float nota;
    do {
        printf("Digite a nota (0 a 10): ");
        scanf("%f", &nota);
        if (nota < 0 || nota > 10) printf("Erro! Nota invalida.\n");
    } while (nota < 0 || nota > 10);
    printf("Nota registrada com sucesso!\n");
    return 0;
}