#include <stdio.h>
int main() {
    int N, d = 0; scanf("%d", &N);
    for (int i = 1; i <= N; i++) if (N % i == 0) d++;
    printf("Divisores: %d -> %s\n", d, d == 2 ? "PRIMO" : "NAO E PRIMO");
    return 0;
}