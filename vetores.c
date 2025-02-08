#include <stdio.h>

#define TAM 3  // Tamanho dos vetores

int main() {
    int vetor1[TAM], vetor2[TAM];
    int diferenca[TAM], soma[TAM], multiplicacao[TAM];

    // Leitura dos dois vetores
    printf("Digite os %d elementos do primeiro vetor:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os %d elementos do segundo vetor:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Gerando os três novos vetores
    for (int i = 0; i < TAM; i++) {
        diferenca[i] = vetor1[i] - vetor2[i];
        soma[i] = vetor1[i] + vetor2[i];
        multiplicacao[i] = vetor1[i] * vetor2[i];
    }

    // Exibindo os resultados
    printf("\nVetor da Diferenca:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", diferenca[i]);
    }

    printf("\n\nVetor da Soma:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", soma[i]);
    }

    printf("\n\nVetor da Multiplicacao:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", multiplicacao[i]);
    }

    printf("\n");

    return 0;
}
