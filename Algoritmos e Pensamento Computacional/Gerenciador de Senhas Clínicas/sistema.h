
#ifndef SISTEMA_H
#define SISTEMA_H

#define MAX 100

typedef struct {
    char nome[100];
    char senha[10];
    char genero;
    int idade;
    int gestante;
    int lactante;
    int especial;
    int obeso;
    char categoria;
} Paciente;

typedef struct {
    Paciente dados[MAX];
    int inicio;
    int fim;
    int quantidade;
} Fila;

typedef struct {
    Fila normal;
    Fila preferencial;
    Fila urgente;

    int numNormal;
    int numPreferencial;
    int numUrgente;

    Paciente atual;
    int emAtendimento;
} Sistema;

/* Funcoes das filas */
void iniciarSistema(Sistema *s);
void iniciarFila(Fila *f);
int inserirFila(Fila *f, Paciente p);
int retirarFila(Fila *f, Paciente *p);
Fila *escolherFila(Sistema *s, char categoria);

/* Funcoes dos pacientes */
void cadastrarPaciente(Sistema *s);
char classificarPaciente(Paciente p);
void gerarSenha(Sistema *s, Paciente *p);

/* Funcoes de atendimento */
void consultarProximo(Sistema *s);
void chamarPaciente(Sistema *s);
void finalizarAtendimento(Sistema *s);

/* Funcoes do painel */
void mostrarPainel(Sistema *s);

/* Menu */
void menu(Sistema *s);

#endif
