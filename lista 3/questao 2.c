//Questao 2 resolvida com o codigo
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; // Declarada fora do laço para manter o escopo e acumular o valor

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    return 0;
}
