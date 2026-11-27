
#include <stdio.h>
#include "sistema.h"

void mostrarPainel(Sistema *s) {
    Fila *filas[3];
    const char *nomes[3] = {
        "URGENTES",
        "PREFERENCIAIS",
        "NORMAIS"
    };

    int total = 0;

    filas[0] = &s->urgente;
    filas[1] = &s->preferencial;
    filas[2] = &s->normal;

    printf("\n================================\n");
    printf("       PAINEL DE ATENDIMENTO\n");
    printf("================================\n");

    if (s->emAtendimento == 1) {
        printf("Em atendimento: %s\n", s->atual.senha);
        printf("Paciente: %s\n", s->atual.nome);

        if (s->atual.categoria == 'U') {
            printf("Categoria: Urgente\n");
        }
        else if (s->atual.categoria == 'P') {
            printf("Categoria: Preferencial\n");
        }
        else {
            printf("Categoria: Normal\n");
        }
    }
    else {
        printf("Nenhum paciente em atendimento.\n");
    }

    for (int i = 0; i < 3; i++) {
        printf("\n%s:\n", nomes[i]);

        if (filas[i]->quantidade == 0) {
            printf("Nenhum paciente aguardando.\n");
        }

        for (int j = 0; j < filas[i]->quantidade; j++) {
            int posicao = (filas[i]->inicio + j) % MAX;

            printf("%s - %s\n",
                   filas[i]->dados[posicao].senha,
                   filas[i]->dados[posicao].nome);
        }

        printf("Quantidade: %d\n", filas[i]->quantidade);

        total += filas[i]->quantidade;
    }

    printf("\nTotal aguardando: %d\n", total);
    printf("================================\n");
}
