#include <stdio.h>
int primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return 0;
    return 1;
}
int main() {
    int A, B, soma = 0; scanf("%d %d", &A, &B);
    for (int i = A; i <= B; i++)
        if (primo(i)) { printf("%d ", i); soma += i; }
    printf("\nSoma = %d\n", soma);
    return 0;
}