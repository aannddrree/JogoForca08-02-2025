#include <stdio.h>
#include <string.h>

#define MAX_TENTATIVAS 6   // Número de tentativas para errar

int main() {

    char palavra[] = "";

    printf("Qual é a Palavra: ");
    scanf("%s", palavra);                   // Palavra a ser adivinhada      
    
    int tamanho_palavra = strlen(palavra);  // Qtd de Caracteres
    char letras_corretas[tamanho_palavra];  // Letras corretas adivinhadas
    char letra;
    int tentativas = MAX_TENTATIVAS;
    int acertos = 0;

    // Inicializa o vetor letras_corretas com '_'
    for (int i = 0; i < tamanho_palavra; i++) {
        letras_corretas[i] = '_';
    }

    printf("Bem-vindo ao Jogo da Forca!\n");
    printf("Tente adivinhar a palavra.\n");

    while (tentativas > 0) {
        printf("\nPalavra: ");
        for (int i = 0; i < tamanho_palavra; i++) {
            printf("%c ", letras_corretas[i]);
        }
        printf("\nTentativas restantes: %d\n", tentativas);
        printf("Digite uma letra: ");
        scanf(" %c", &letra);  // A entrada deve ser um único caractere

        int acerto = 0;
        // Verifica se a letra existe na palavra
        for (int i = 0; i < tamanho_palavra; i++) {
            if (palavra[i] == letra && letras_corretas[i] == '_') {
                letras_corretas[i] = letra;  // Substitui o espaço por letra correta
                acerto = 1;
                acertos++;
            }
        }

        if (acerto == 0) {
            tentativas--;  // Se o jogador errar, diminui o número de tentativas
            printf("Letra incorreta! Você perdeu uma tentativa.\n");
        }

        // Verifica se o jogador adivinhou a palavra
        if (acertos == tamanho_palavra) {
            printf("\nParabéns! Você adivinhou a palavra: %s\n", palavra);
            break;
        }
    }

    if (tentativas == 0) {
        printf("\nVocê perdeu! A palavra era: %s\n", palavra);
    }

    return 0;
}