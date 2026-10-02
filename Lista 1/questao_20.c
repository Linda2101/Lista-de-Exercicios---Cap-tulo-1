/*Questão 20. Caracteres gráficos baseados na tabela ASCII estendida (Codepage 437) podem ser
usados para desenhar molduras e caixas de diálogo na tela de modo console. Desenvolva um programa
em C que produza uma moldura simples com exatamente 4 caracteres de largura por 4 de altura. Dica:

Cesar School | Programação Imperativa e Funcional | Página 6
utilize constantes de caracteres em hexadecimal para representar os cantos e as retas
horizontais/verticais:

Cantos Superiores: Esquerdo = \xC9, Direito = \xBB
Cantos Inferiores: Esquerdo = \xC8, Direito = \xBC
Linha Horizontal: \xCD, Linha Vertical: \xBA*/

#include <stdio.h>

int main() {
    char topoEsq = '\xC9', topoDir = '\xBB';
    char basEsq  = '\xC8', basDir  = '\xBC';
    char horiz   = '\xCD', vert    = '\xBA';

    printf("%c%c%c%c\n", topoEsq, horiz, horiz, topoDir);
    printf("%c  %c\n", vert, vert);
    printf("%c  %c\n", vert, vert);
    printf("%c%c%c%c\n", basEsq, horiz, horiz, basDir);

    return 0;
}