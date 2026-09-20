#include <stdio.h>

void limparBuffer() {
    while (getchar() != '\n');
}

int main() {
    float limite, temperatura;

    float soma = 0;
    float maior = 0;
    float menor = 0;
    float media;
    float porcentagem;

    int entradaValida;
    int quantidadeLeituras = 0;
    int acimaLimite = 0;
    int consecutivas = 0;

    // Define o limite de temperatura
    do {
        printf("\nDigite o limite de temperatura: ");

        entradaValida = scanf("%f", &limite);

        limparBuffer();

        if (entradaValida != 1) {
            printf("Entrada invalida! Digite um numero.\n");
        } else {
            printf("Limite definido: %.2f graus\n", limite);
        }

    } while (entradaValida != 1);

    printf("\n============================================\n");
    printf("        INICIO DO MONITORAMENTO\n");
    printf("============================================\n");
    printf("Digite as temperaturas uma por vez.\n");
    printf("O monitoramento sera encerrado quando\n");
    printf("forem registradas 3 temperaturas consecutivas\n");
    printf("acima do limite definido.\n");

    // Realiza o monitoramento
    while (consecutivas < 3) {

        printf("\nDigite a temperatura: ");

        entradaValida = scanf("%f", &temperatura);

        limparBuffer();

        // Verifica se a entrada e valida
        if (entradaValida != 1) {
            printf("Entrada invalida! Digite uma temperatura numerica.\n");
            continue;
        }

        quantidadeLeituras++;

        printf("Temperatura registrada: %.2f graus\n", temperatura);

        // Soma para calcular a media
        soma += temperatura;

        // Define maior e menor temperatura
        if (quantidadeLeituras == 1) {
            maior = temperatura;
            menor = temperatura;
        } else {
            if (temperatura > maior) {
                maior = temperatura;
            }

            if (temperatura < menor) {
                menor = temperatura;
            }
        }

        // Verifica se esta acima do limite
        if (temperatura > limite) {

            acimaLimite++;
            consecutivas++;

            printf("ALERTA: temperatura acima do limite!\n");
            printf("Temperaturas consecutivas acima do limite: %d/3\n",
                   consecutivas);

            if (consecutivas == 3) {
                printf("\n*** LIMITE DE SEGURANCA ATINGIDO ***\n");
                printf("Tres temperaturas consecutivas acima do limite.\n");
                printf("Monitoramento encerrado automaticamente.\n");
            }

        } else {

            consecutivas = 0;

            printf("Temperatura dentro do limite.\n");
            printf("Contagem de consecutivas reiniciada.\n");
        }
    }

    // Calcula os resultados finais
    media = soma / quantidadeLeituras;
    porcentagem = ((float)acimaLimite / quantidadeLeituras) * 100;

    printf("\n============================================\n");
    printf("             RESUMO FINAL\n");
    printf("============================================\n");

    printf("Limite definido: %.2f graus\n", limite);
    printf("Total de leituras validas: %d\n", quantidadeLeituras);
    printf("Temperatura media: %.2f graus\n", media);
    printf("Maior temperatura: %.2f graus\n", maior);
    printf("Menor temperatura: %.2f graus\n", menor);
    printf("Temperaturas acima do limite: %d\n", acimaLimite);
    printf("Porcentagem acima do limite: %.2f%%\n", porcentagem);

    printf("Motivo do encerramento: 3 temperaturas\n");
    printf("consecutivas acima do limite.\n");

    printf("============================================\n");

    return 0;
}
