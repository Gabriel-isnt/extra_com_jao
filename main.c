#include <stdio.h>
#include "funcoes.h"

int main() {
    int dim, i, j;

    // Pergunta ao usuário a dimensão (2 ou 3)
    printf("Entre com a dimensão do espaço (2 ou 3): ");
    scanf("%d", &dim);

    if (dim == 2) {
        float mat2[2][2];

        // Lê os vetores de dimensão 2
        printf("Entre com os vetores no formato 2x2 (duas colunas, dois vetores):\n");
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                printf("Elemento [%d][%d]: ", i, j);
                scanf("%f", &mat2[i][j]);
            }
        }

        // Calcula o determinante
        float det2 = determinante2x2(mat2);

        // Verifica se o determinante é diferente de 0
        if (det2 != 0) {
            printf("Os vetores formam uma base em R^2.\n");
        } else {
            printf("Os vetores NÃO formam uma base em R^2 (são linearmente dependentes).\n");
        }

    } else if (dim == 3) {
        float mat3[3][3];

        // Lê os vetores de dimensão 3
        printf("Entre com os vetores no formato 3x3 (três colunas, três vetores):\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("Elemento [%d][%d]: ", i, j);
                scanf("%f", &mat3[i][j]);
            }
        }

        // Calcula o determinante
        float det3 = determinante3x3(mat3);

        // Verifica se o determinante é diferente de 0
        if (det3 != 0) {
            printf("Os vetores formam uma base em R^3.\n");
        } else {
            printf("Os vetores NÃO formam uma base em R^3 (são linearmente dependentes).\n");
        }

    } else {
        printf("Dimensão inválida! Escolha 2 ou 3.\n");
    }

    return 0;
}
