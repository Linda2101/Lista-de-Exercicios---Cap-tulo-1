#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; // Correção: declarada fora do laço para acumular o valor

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i; 
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE"); 
    return 0;
}
