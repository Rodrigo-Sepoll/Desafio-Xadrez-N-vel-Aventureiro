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

    // --- Simulação do Movimento do Cavalo (usando for e while aninhados) ---    
    printf("*** Movimento do Cavalo ***\n");
    printf("O Cavalo se move %d casas para baixo e %d casa para a esquerda.\n", CAVALO_VERTICAL, CAVALO_HORIZONTAL);
    
    // Primeiro loop (for) para as duas casas para baixo
    for (int i = 0; i < CAVALO_VERTICAL; i++) {
    printf("Baixo\n"); // Simula um passo para baixo
    }

    // Segundo loop (while) para a uma casa para a esquerda
    int contadorCavaloHorizontal = 0;
    while (contadorCavaloHorizontal < CAVALO_HORIZONTAL) {
        printf("Esquerda\n"); // Simula um passo para a esquerda
        contadorCavaloHorizontal++;
    }
    printf("\n");
    return 0;
}