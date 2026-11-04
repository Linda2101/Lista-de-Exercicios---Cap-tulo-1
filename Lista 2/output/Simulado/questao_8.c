/*Questão 8. Cálculos Geométricos e Constantes com `<math.h>` — Desenvolva um programa em C
que solicite ao usuário o valor do raio R de uma esfera. Defina a constante PI como 3.14159265 e
calcule: a) A área da superfície da esfera (A = 4 * PI * R2); b) O volume da esfera (V = (4.0/3.0) * PI *
R3). Utilize a função pow() da biblioteca `<math.h>` e exiba os resultados formatados com 3 casas
decimais. Atenção para a divisão real de 4.0 por 3.0!*/

#include <stdio.h>
#include <math.h>

int main(){

    double PI = 3.14159265;
    float a, v, r;

    printf("Digite o valor do raio: ");
    scanf("%f", &r);

    printf("O raio ao  quadrado e: %f\n", pow(r,2));

    a = (4 * PI * pow(r,2));

    printf("Me mostre a area da casa:%.3f\n", a);

    v = (4.0/3.0) * PI * pow(r,3);

    printf("Me fale o volume da casa:%.3f\n",v);

    return 0;
}