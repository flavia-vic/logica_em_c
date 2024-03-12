#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_TABULEIRO 3

void inicializarTabuleiro(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]);
void exibirTabuleiro(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]);
int verificarVitoria(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]);
int verificarEmpate(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]);
void fazerJogadaJogador(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]);
void fazerJogadaComputador(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]);

int main() {
    char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    int jogadas = 0;

    srand(time(NULL)); // Inicializar semente para gerar números aleatórios

    inicializarTabuleiro(tabuleiro);

    do {
        exibirTabuleiro(tabuleiro);

        // Jogador 'X'
        fazerJogadaJogador(tabuleiro);
        jogadas++;

        // Verificar se o jogador venceu
        if (verificarVitoria(tabuleiro)) {
            exibirTabuleiro(tabuleiro);
            printf("Jogador 'X' venceu!\n");
            break;
        }

        // Verificar empate
        if (jogadas == TAMANHO_TABULEIRO * TAMANHO_TABULEIRO) {
            exibirTabuleiro(tabuleiro);
            printf("Empate! O jogo terminou.\n");
            break;
        }

        // Jogador 'O' (IA)
        fazerJogadaComputador(tabuleiro);
        jogadas++;

        // Verificar se a IA venceu
        if (verificarVitoria(tabuleiro)) {
            exibirTabuleiro(tabuleiro);
            printf("Jogador 'O' (IA) venceu!\n");
            break;
        }

        // Verificar empate
        if (jogadas == TAMANHO_TABULEIRO * TAMANHO_TABULEIRO) {
            exibirTabuleiro(tabuleiro);
            printf("Empate! O jogo terminou.\n");
            break;
        }

    } while (1);

    return 0;
}

void inicializarTabuleiro(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}

void exibirTabuleiro(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("\n  1 2 3\n");

    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%c", tabuleiro[i][j]);
            if (j < TAMANHO_TABULEIRO - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < TAMANHO_TABULEIRO - 1) {
            printf("  -----\n");
        }
    }
    printf("\n");
}

int verificarVitoria(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    // Verificar linhas e colunas
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        if (tabuleiro[i][0] != ' ' &&
            tabuleiro[i][0] == tabuleiro[i][1] &&
            tabuleiro[i][0] == tabuleiro[i][2]) {
            return 1; // Vitória
        }

        if (tabuleiro[0][i] != ' ' &&
            tabuleiro[0][i] == tabuleiro[1][i] &&
            tabuleiro[0][i] == tabuleiro[2][i]) {
            return 1; // Vitória
        }
    }

    // Verificar diagonais
    if (tabuleiro[0][0] != ' ' &&
        tabuleiro[0][0] == tabuleiro[1][1] &&
        tabuleiro[0][0] == tabuleiro[2][2]) {
        return 1; // Vitória
    }

    if (tabuleiro[0][2] != ' ' &&
        tabuleiro[0][2] == tabuleiro[1][1] &&
        tabuleiro[0][2] == tabuleiro[2][0]) {
        return 1; // Vitória
    }

    return 0; // Sem vitória
}

int verificarEmpate(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (tabuleiro[i][j] == ' ') {
                return 0; // Ainda há espaços vazios
            }
        }
    }
    return 1; // Tabuleiro cheio, empate
}

void fazerJogadaJogador(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    int linha, coluna;

    do {
        printf("Jogador 'X', insira a linha e a coluna (por exemplo, 1 2): ");
        scanf("%d %d", &linha, &coluna);

        // Verificar se a posição está válida
        if (linha < 1 || linha > 3 || coluna < 1 || coluna > 3 || tabuleiro[linha - 1][coluna - 1] != ' ') {
            printf("Posicao invalida. Tente novamente.\n");
        } else {
            tabuleiro[linha - 1][coluna - 1] = 'X';
            break;
        }
    } while (1);
}

void fazerJogadaComputador(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    int linha, coluna;

    do {
        linha = rand() % 3 + 1; // Gera um número aleatório entre 1 e 3
        coluna = rand() % 3 + 1;

        // Verificar se a posição está vazia
        if (tabuleiro[linha - 1][coluna - 1] == ' ') {
            tabuleiro[linha - 1][coluna - 1] = 'O';
            printf("Jogador 'O' (IA) escolheu: %d %d\n", linha, coluna);
            break;
        }
    } while (1);
}
