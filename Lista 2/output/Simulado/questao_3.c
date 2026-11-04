/*Questão 03. Operadores de Atribuição Composta e Avaliação Sequencial (Cap. 2) — Os
operadores de atribuição em C executam suas ações da direita para a esquerda e podem ser
combinados com operadores aritméticos. Determine os valores finais de a, b, c e d após a execução da
sequência abaixo:
int a = 2, b = 4, c = 5, d = 10;
a += b + c; // Valor final de a = ?
b *= c = d - 2; // Valores finais de b e c = ?
d %= a + 3; // Valor final de d = ?
a += b += c += 5; // Valores finais de a, b e c = ?*/

a += b + c;
A expressão avalia primeiro b+c (4+5=9). Em seguida, soma isso ao valor de a: a=2+9=11.
Estado atual: a=11, b=4, c=5, d=10.

b *= c = d - 2;
Resolvemos da direita para a esquerda: primeiro c=10-2=8. Agora c vale 8. Depois, multiplicamos b por esse novo valor de c: b=48=32.
Estado atual: a=11, b=32, c=8, d=10.

d %= a + 3;
Primeiro somamos a+3 (11+3=14). O operador % calcula o resto da divisão. Então $d = 10 \pmod{14}$. Como 10 é menor que 14, o resto é o próprio 10.
Estado atual: a=11, b=32, c=8, d=10.

a += b += c += 5;
Da direita para a esquerda:
c=c+5=8+5=13

b=b+13=32+13=45

a=a+45=11+45=56

Os valores finais são: a = 56, b = 45, c = 13 e d = 10.
