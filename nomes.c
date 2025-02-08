#include <stdio.h>
#include <string.h>

#define TAM 3  // Tamanho do vetor de nomes

int main() {
    char nomes[TAM][50];  // Vetor para armazenar 10 nomes (máximo de 50 caracteres por nome)
    char nomeBusca[50];
    int encontrado = 0;  // Variável para verificar se o nome foi encontrado

    // Leitura dos 10 nomes
    printf("Digite os %d nomes:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("Nome %d: ", i + 1);
        scanf(" %[^\n]", nomes[i]);  // Lê a string com espaços
    }

    // Solicitação do nome para busca
    printf("\nDigite um nome para buscar: ");
    scanf(" %[^\n]", nomeBusca);

    // Busca pelo nome no vetor
    for (int i = 0; i < TAM; i++) {
        if (strcmp(nomes[i], nomeBusca) == 0) {  // Compara strings
            encontrado = 1;
            break;
        }
    }

    // Exibição do resultado
    if (encontrado) {
        printf("ACHEI\n");
    } else {
        printf("NÃO ACHEI\n");
    }

    return 0;
}
