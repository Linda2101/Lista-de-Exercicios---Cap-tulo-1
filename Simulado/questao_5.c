a) A diferença essencial é que o laço while testa a condição no início. Se for falsa de cara, o código dentro dele pode executar zero vezes. O do-while testa a condição no final, o que garante que o código execute pelo menos 1 vez.

b) O laço for é a melhor escolha (mais elegante e legível) quando você sabe antecipadamente o número exato de vezes que a repetição deve acontecer (um laço contado).

c) Constitui um erro de lógica (o compilador não vai reclamar). Se a condicao for verdadeira, o ponto e vírgula atua como uma instrução vazia. O programa ficará preso em um "loop infinito" fazendo absolutamente nada, pois não há código dentro do laço para alterar a condição e torná-la falsa.
