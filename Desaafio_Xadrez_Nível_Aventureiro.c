#include <stdio.h>

// Definição de constantes para as movimentações das peças
int BISPO = 5;   // Bispo: 5 casas na diagonal superior direita
int TORRE = 5;   // Torre: 5 casas para a direita
int RAINHA = 8;  // Rainha: 8 casas para a esquerda
int CAVALO_VERTICAL = 2; // Cavalo: 2 casas em uma direção (vertical)
int CAVALO_HORIZONTAL = 1; // Cavalo: 1 casa perpendicularmente (horizontal)

int main(){
    // --- Simulação do Movimento da Torre (usando for) ---
    printf("*** Movimento da Torre ***\n");
    printf("A Torre se move %d casas para a Direita.\n", TORRE);
    for (int i = 0; i < TORRE; i++) {
        printf("Direita\n"); // Simula um passo para a direita
    }
    printf("\n");

    // --- Simulação do Movimento da Rainha (usando while) ---
    printf("*** Movimento da Rainha ***\n");
    printf("A Rainha se move %d casas para a Esquerda.\n", RAINHA);
    int contadorRainha = 0;
    while (contadorRainha < RAINHA) {
        printf("Esquerda\n"); // Simula um passo para a esquerda
        contadorRainha++;
    }
    printf("\n");
    
    // --- Simulação do Movimento do Bispo (usando do-while) ---
    printf("*** Movimento do Bispo ***\n");
    printf("O Bispo se move %d casas na diagonal superior direita.\n", BISPO);
    int contadorBispo = 0;
    do {
        printf("Cima e Direita (Diagonal)\n"); // Simula um passo na diagonal
        contadorBispo++;
    } while (contadorBispo < BISPO);
    printf("\n");
    return 0;
}