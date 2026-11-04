#include <stdio.h>
int main() {
    float n, s = 0, ma = -1, me = 11; int t = 0;
    while (scanf("%f", &n) && n != -1.0f) {
        if (n < 0 || n > 10) continue;
        s += n; t++;
        if (n > ma) ma = n;
        if (n < me) me = n;
    }
    if (t) printf("Total: %d | Maior: %.2f | Menor: %.2f | Media: %.2f\n", t, ma, me, s/t);
    return 0;
}