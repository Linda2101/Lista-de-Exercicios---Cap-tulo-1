a) O erro de compilação ocorre por causa do escopo da variável. A variável int soma = 0; foi criada dentro das chaves do laço for. Assim que o laço termina, essa variável é destruída da memória. Quando o printf tenta usá-la lá fora, ela não existe mais.

b) O laço for inicia em 1. Ele executa normalmente para i=1,2,3,4. Quando i=5, o comando continue força o laço a pular a parte debaixo (a soma) e ir direto para a próxima rodada. Ele roda para i=6 e 7. Quando i=8, o break encerra o laço imediatamente, interrompendo tudo.

c) Para corrigir, declaramos a soma antes do laço para ela não zerar toda vez e não sumir no final.
