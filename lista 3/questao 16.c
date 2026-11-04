#include <stdio.h>
int main() {
    int s, t = 0;
    while (t < 3) {
        scanf("%d", &s); t++;
        if (s == 2026) { printf("Acesso Concedido! Tentativas: %d\n", t); return 0; }
    }
    printf("Conta Bloqueada por Segurança!\n");
    return 0;
}