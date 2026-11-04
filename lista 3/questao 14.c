#include <stdio.h>
int main() {
    long long soma = 0;
    for (int i = 1; i <= 100; i++) {
        long long q = (long long)i * i;
        printf("%d -> %lld\n", i, q);
        soma += q;
    }
    printf("Soma total = %lld\n", soma);
    return 0;
}