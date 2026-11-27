
#include <stdio.h>
#include "sistema.h"

void menu(Sistema *s) {
    int opcao;
    int c;

    do {
        printf("\n========== SISTEMA DE SENHAS ==========\n");
        printf("1 - Cadastrar paciente\n");
        printf("2 - Consultar proximo paciente\n");
        printf("3 - Chamar paciente\n");
        printf("4 - Finalizar atendimento\n");
        printf("5 - Mostrar painel\n");
        printf("0 - Sair\n");
        printf("Escolha: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida.\n");

            while ((c = getchar()) != '\n' && c != EOF) {
                /* Limpa a entrada */
            }

            opcao = -1;
            continue;
        }

        while ((c = getchar()) != '\n' && c != EOF) {
            /* Limpa a entrada */
        }

        switch (opcao) {
            case 1:
                cadastrarPaciente(s);
                break;

            case 2:
                consultarProximo(s);
                break;

            case 3:
                chamarPaciente(s);
                break;

            case 4:
                finalizarAtendimento(s);
                break;

            case 5:
                mostrarPainel(s);
                break;

            case 0:
                printf("Sistema encerrado.\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 0);
}

int main() {
    Sistema sistema;

    iniciarSistema(&sistema);
    menu(&sistema);

    return 0;
}
