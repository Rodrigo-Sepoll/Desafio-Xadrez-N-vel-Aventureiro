# Desafio-Xadrez-N-vel-Aventureiro
Desafio Xadrez Nível Aventureiro

Simulação de Movimentos

Este projeto em C simula os movimentos básicos de algumas peças de xadrez utilizando diferentes estruturas de repetição (for, while, do-while e aninhados).

Como compilar e executar

1.  Salve o código:** Salve o código-fonte como `xadrez.c`.
2.  Compile:** Abra um terminal ou prompt de comando e use o compilador GCC:
    bash
    gcc xadrez.c -o xadrez
    
3.  Execute:
    bash
    ./xadrez
    

Peças e Movimentos Simulados

•	Torre: Simula um movimento reto para a direita.
•	Rainha: Simula um movimento reto para a esquerda.
•	Bispo: Simula um movimento na diagonal superior direita.
•	Cavalo: Simula o movimento em "L" (duas casas em uma direção e uma perpendicular).

Estruturas de Repetição Utilizadas

•	for: Utilizado para a Torre e a primeira parte do movimento do Cavalo.
•	while: Utilizado para a Rainha e a segunda parte do movimento do Cavalo.
•	do-while: Utilizado para o Bispo.

Exemplo de Saída

*** Movimento da Torre ***

A Torre se move 5 casas para a Direita.
Direita
Direita
Direita
Direita
Direita

*** Movimento da Rainha ***

A Rainha se move 8 casas para a Esquerda.
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

*** Movimento do Bispo ***

O Bispo se move 5 casas na diagonal superior direita.
Cima e Direita (Diagonal)
Cima e Direita (Diagonal)
Cima e Direita (Diagonal)
Cima e Direita (Diagonal)
Cima e Direita (Diagonal)

*** Movimento do Cavalo ***

O Cavalo se move 2 casas para baixo e 1 casa para a esquerda.
Baixo
Baixo
Esquerda

Desafio Xadrez - Movimentos concluídos.
