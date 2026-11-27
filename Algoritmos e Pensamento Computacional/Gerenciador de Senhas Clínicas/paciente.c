
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "sistema.h"

char classificarPaciente(Paciente p) {

    if (p.idade > 80) {
        return 'U';
    }

    if (p.gestante == 1 ||
        p.lactante == 1 ||
        p.especial == 1 ||
        p.obeso == 1) {
        return 'P';
    }

    if (p.genero == 'F' && p.idade >= 60) {
        return 'P';
    }

    if (p.genero == 'M' && p.idade >= 65) {
        return 'P';
    }

    return 'N';
}

/* Gera uma senha de acordo com a categoria */
void gerarSenha(Sistema *s, Paciente *p) {

    if (p->categoria == 'N') {
        s->numNormal++;
        snprintf(p->senha, sizeof(p->senha), "N%03d", s->numNormal);
    }
    else if (p->categoria == 'P') {
        s->numPreferencial++;
        snprintf(p->senha, sizeof(p->senha), "P%03d", s->numPreferencial);
    }
    else {
        s->numUrgente++;
        snprintf(p->senha, sizeof(p->senha), "U%03d", s->numUrgente);
    }
}

/* Le uma resposta S ou N */
int lerSimNao(const char *pergunta) {
    char resposta[50];

    while (1) {
        printf("%s (S/N): ", pergunta);

        if (fgets(resposta, sizeof(resposta), stdin) == NULL) {
            return 0;
        }

        resposta[strcspn(resposta, "\n")] = '\0';

        char *p = resposta;

        while (isspace((unsigned char)*p)) {
            p++;
        }

        char letra = toupper((unsigned char)*p);

        if ((letra == 'S' || letra == 'N') &&
            p[1] == '\0') {
            return letra == 'S';
        }

        printf("Resposta invalida. Digite S ou N.\n");
    }
}

/* Faz o cadastro do paciente */
void cadastrarPaciente(Sistema *s) {
    Paciente p = {0};
    Fila *f;
    char resposta[100];
    char *fim;
    long idade;

    printf("\n--- CADASTRO DE PACIENTE ---\n");

    /* Nome */
    while (1) {
        printf("Nome: ");

        if (fgets(p.nome, sizeof(p.nome), stdin) == NULL) {
            return;
        }

        p.nome[strcspn(p.nome, "\n")] = '\0';

        int valido = 0;

        for (int i = 0; p.nome[i] != '\0'; i++) {
            if (!isspace((unsigned char)p.nome[i])) {
                valido = 1;
                break;
            }
        }

        if (valido) {
            break;
        }

        printf("Digite um nome valido.\n");
    }

    /* Genero */
    while (1) {
        printf("Genero (F/M): ");

        if (fgets(resposta, sizeof(resposta), stdin) == NULL) {
            return;
        }

        resposta[strcspn(resposta, "\n")] = '\0';

        char *pResposta = resposta;

        while (isspace((unsigned char)*pResposta)) {
            pResposta++;
        }

        p.genero = toupper((unsigned char)pResposta[0]);

        if ((p.genero == 'F' || p.genero == 'M') &&
            pResposta[1] == '\0') {
            break;
        }

        printf("Genero invalido. Digite F ou M.\n");
    }

    /* Idade */
    while (1) {
        printf("Idade: ");

        if (fgets(resposta, sizeof(resposta), stdin) == NULL) {
            return;
        }

        resposta[strcspn(resposta, "\n")] = '\0';

        idade = strtol(resposta, &fim, 10);

        while (isspace((unsigned char)*fim)) {
            fim++;
        }

        if (resposta[0] != '\0' &&
            *fim == '\0' &&
            idade >= 0 &&
            idade <= 130) {

            p.idade = (int)idade;
            break;
        }

        printf("Idade invalida. Digite um numero entre 0 e 130.\n");
    }

    /* Condicoes do paciente */
    if (p.genero == 'F') {
        p.gestante = lerSimNao("Esta gestante?");
    }

    p.lactante = lerSimNao("E lactante?");
    p.especial = lerSimNao("Possui necessidade especial?");
    p.obeso = lerSimNao("Possui condicao de obesidade?");

    /* Classificacao e escolha da fila */
    p.categoria = classificarPaciente(p);
    f = escolherFila(s, p.categoria);

    if (f == NULL || f->quantidade == MAX) {
        printf("\nFila cheia. Paciente nao cadastrado.\n");
        return;
    }

    /* Geracao da senha */
    gerarSenha(s, &p);

    if (!inserirFila(f, p)) {
        printf("\nNao foi possivel cadastrar o paciente.\n");
        return;
    }

    printf("\nPaciente cadastrado!\n");
    printf("Senha: %s\n", p.senha);

    if (p.categoria == 'N') {
        printf("Categoria: Normal\n");
    }
    else if (p.categoria == 'P') {
        printf("Categoria: Preferencial\n");
    }
    else {
        printf("Categoria: Urgente\n");
    }
}

