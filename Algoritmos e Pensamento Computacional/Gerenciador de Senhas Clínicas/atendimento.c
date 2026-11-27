
#include <stdio.h>
#include "sistema.h"

/* Consulta quem sera atendido em seguida */
void consultarProximo(Sistema *s) {
    Paciente p;
    Fila *f = NULL;

    printf("\n--- PROXIMO PACIENTE ---\n");

    if (s->urgente.quantidade > 0) {
        f = &s->urgente;
    }
    else if (s->preferencial.quantidade > 0) {
        f = &s->preferencial;
    }
    else if (s->normal.quantidade > 0) {
        f = &s->normal;
    }

    if (f == NULL) {
        printf("Nao existem pacientes aguardando.\n");
        return;
    }

    p = f->dados[f->inicio];

    printf("Senha: %s\n", p.senha);
    printf("Nome: %s\n", p.nome);

    if (p.categoria == 'U') {
        printf("Categoria: Urgente\n");
    }
    else if (p.categoria == 'P') {
        printf("Categoria: Preferencial\n");
    }
    else {
        printf("Categoria: Normal\n");
    }
}

/* Chama o proximo paciente */
void chamarPaciente(Sistema *s) {
    Paciente p;
    int chamado = 0;

    if (s->emAtendimento == 1) {
        printf("\nFinalize o atendimento atual primeiro.\n");
        return;
    }

    if (retirarFila(&s->urgente, &p)) {
        chamado = 1;
    }
    else if (retirarFila(&s->preferencial, &p)) {
        chamado = 1;
    }
    else if (retirarFila(&s->normal, &p)) {
        chamado = 1;
    }

    if (chamado == 0) {
        printf("\nNao existem pacientes na fila.\n");
        return;
    }

    s->atual = p;
    s->emAtendimento = 1;

    printf("\n--- PACIENTE CHAMADO ---\n");
    printf("Senha: %s\n", p.senha);
    printf("Nome: %s\n", p.nome);

    if (p.categoria == 'U') {
        printf("Categoria: Urgente\n");
    }
    else if (p.categoria == 'P') {
        printf("Categoria: Preferencial\n");
    }
    else {
        printf("Categoria: Normal\n");
    }
}

/* Finaliza o atendimento atual */
void finalizarAtendimento(Sistema *s) {

    if (s->emAtendimento == 0) {
        printf("\nNao existe atendimento em andamento.\n");
        return;
    }

    printf("\nAtendimento finalizado!\n");
    printf("Paciente: %s\n", s->atual.nome);
    printf("Senha: %s\n", s->atual.senha);

    s->emAtendimento = 0;
}
