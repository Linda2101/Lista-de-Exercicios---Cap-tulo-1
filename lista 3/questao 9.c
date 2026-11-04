#include <stdio.h>
int main() {
    float v, s = 0; int q = 0;
    while (1) {
        printf("Valor: "); scanf("%f", &v);
        if (v < 0) break;
        s += v; q++;
    }
    printf("Qtd: %d | Soma: %.2f | Media: %.2f\n", q, s, q ? s/q : 0);
    return 0;
}