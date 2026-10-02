/*Questão 02. Especificadores de Formato, Sequências de Escape e Erros de Compilação (Cap. 1)
— Um estudante iniciante escreveu o código C abaixo tentando imprimir mensagens formatadas com
quebras de linha e tabulações, mas enfrentou erros de compilação. Identifique os três erros
sintáticos/estruturais presentes no código:*/

#include <stdio.h>
#include <stdlib.h>;
int Main()
{
int idade = 20;
printf( A idade do aluno eh: %d anos.. , idade);

1 erro (#include <stdlib.h>;) a biblioteca está com ;
2 erro (int Main()) o M maiúsculo da int main
3 erro faltou o return 0; e o } e a ausência de aspas duplas no printf

como o codigo fica:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 20;
    printf("A idade do aluno eh: %d anos..\n", idade);
    return 0;
}