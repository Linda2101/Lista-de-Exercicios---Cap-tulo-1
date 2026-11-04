#include <stdio.h>
int main() {
    int L; scanf("%d", &L);
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < L; j++)
            printf((i==0 || i==L-1 || j==0 || j==L-1) ? "X" : " ");
        printf("\n");
    }
    return 0;
}