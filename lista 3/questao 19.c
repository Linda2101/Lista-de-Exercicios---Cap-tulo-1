#include <stdio.h>
int main() {
    int N; long long t1 = 1, t2 = 1, prox;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        printf("%lld ", t1);
        prox = t1 + t2; t1 = t2; t2 = prox;
    }
    return 0;
}