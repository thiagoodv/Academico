
#include <stdio.h>
#include "sistema.h"

void iniciarFila(Fila *f) {
    f->inicio = 0;
    f->fim = -1;
    f->quantidade = 0;
}

void iniciarSistema(Sistema *s) {
    iniciarFila(&s->normal);
    iniciarFila(&s->preferencial);
    iniciarFila(&s->urgente);

    s->numNormal = 0;
    s->numPreferencial = 0;
    s->numUrgente = 0;

    s->emAtendimento = 0;
}

int inserirFila(Fila *f, Paciente p) {
    if (f->quantidade == MAX) {
        return 0;
    }

    f->fim = (f->fim + 1) % MAX;
    f->dados[f->fim] = p;
    f->quantidade++;

    return 1;
}

int retirarFila(Fila *f, Paciente *p) {
    if (f->quantidade == 0) {
        return 0;
    }

    *p = f->dados[f->inicio];

    f->inicio = (f->inicio + 1) % MAX;
    f->quantidade--;

    return 1;
}

Fila *escolherFila(Sistema *s, char categoria) {
    if (categoria == 'N') {
        return &s->normal;
    }

    if (categoria == 'P') {
        return &s->preferencial;
    }

    if (categoria == 'U') {
        return &s->urgente;
    }

    return NULL;
}
