/*Questão 24. Desenvolva um programa em C que organize dados de notas escolares em uma tabela
no console. Seu programa deve usar especificadores de formato e largura de campos para que as
colunas fiquem perfeitamente alinhadas, gerando a saída mostrada abaixo:

ALUNO(A) NOTA
========= =====
ALINE 9.0*/

#include <stdio.h>

int main() {
    printf("%-10s %5s\n", "ALUNO(A)", "NOTA");
    printf("%-10s %5s\n", "=========", "=====");
    printf("%-10s %5.1f\n", "ALINE", 9.0);
    printf("%-10s %5s\n", "MÁRIO", "DEZ");
    printf("%-10s %5.1f\n", "SÉRGIO", 4.5);
    printf("%-10s %5.1f\n", "SHIRLEY", 7.0);

    return 0;
}