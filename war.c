#include <stdio.h>
#include <string.h>

#define QUANTIDADE_TERRITORIOS 5

// Desafio War: Implementando uso de structs
// Aluno: Francisco Araújo de Paiva Junior
// Tema 1 - Estruturas de Dados: Conceitos e Representação
// Nível: Novato

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Vetor para armazenar os 5 territórios
    struct Territorio territorios[QUANTIDADE_TERRITORIOS];

    // Cadastro dos territórios
    for (int i = 0; i < QUANTIDADE_TERRITORIOS; i++) {
        printf("\nCadastro do territorio %d\n", i + 1);

        printf("Digite o nome do territorio: ");
        scanf(" %29[^\n]", territorios[i].nome);

        printf("Digite a cor do exercito: ");
        scanf(" %9[^\n]", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos territórios cadastrados
    printf("\n===== TERRITORIOS CADASTRADOS =====\n");

    for (int i = 0; i < QUANTIDADE_TERRITORIOS; i++) {
        printf("\nTerritorio %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}