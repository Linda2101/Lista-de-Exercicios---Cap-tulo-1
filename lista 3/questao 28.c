#include <stdio.h>
int main() {
    int op; double s;
    do {
        printf("\n1.Reajuste 2.IR 3.Sair: "); scanf("%d", &op);
        if (op == 1) {
            scanf("%lf", &s);
            printf("Novo: R$ %.2f\n", s <= 2000 ? s*1.15 : s*1.10);
        } else if (op == 2) {
            scanf("%lf", &s);
            printf("IR: R$ %.2f\n", s <= 3000 ? s*0.08 : s*0.15);
        }
    } while (op != 3);
    return 0;
}