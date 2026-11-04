#include <stdio.h>
int main() {
    int v, c[] = {100, 50, 20, 10, 5, 2}; scanf("%d", &v);
    for (int i = 0; i < 6; i++) {
        int q = 0;
        while (v >= c[i]) { v -= c[i]; q++; }
        if (q) printf("R$ %d: %d\n", c[i], q);
    }
    return 0;
}