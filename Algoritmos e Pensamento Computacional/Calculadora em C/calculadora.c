#include <stdio.h>
#include <string.h>
#include <math.h>

#define PI 3.14159265358979323846

// 1. Soma
double somar(double a, double b) {
    return a + b;
}

// 2. Subtracao
double subtrair(double a, double b) {
    return a - b;
}

// 3. Multiplicacao
double multiplicar(double a, double b) {
    return a * b;
}

// 4. Divisao
double dividir(double a, double b) {
    return a / b;
}

// 5. Potencia
double potencia(double a, double b) {
    return pow(a, b);
}

// 6. Raiz quadrada
double raizQuadrada(double a) {
    return sqrt(a);
}

// 7. Raiz cubica
double raizCubica(double a) {
    return cbrt(a);
}

// 8. Seno
double seno(double a) {
    return sin(a * PI / 180);
}

// 9. Cosseno
double cosseno(double a) {
    return cos(a * PI / 180);
}

// 10. Tangente
double tangente(double a) {
    return tan(a * PI / 180);
}

// 11. Logaritmo natural
double logNatural(double a) {
    return log(a);
}

// 12. Logaritmo base 10
double logBase10(double a) {
    return log10(a);
}

// 13. Valor absoluto
double valorAbsoluto(double a) {
    return fabs(a);
}

// 14. Porcentagem
double porcentagem(double a, double b) {
    return (a * b) / 100;
}

// 15. Media aritmetica
double media(double a, double b) {
    return (a + b) / 2;
}

// 16. Graus para radianos
double grausParaRadianos(double a) {
    return a * PI / 180;
}

// 17. Radianos para graus
double radianosParaGraus(double a) {
    return a * 180 / PI;
}

// 18. Area do circulo
double areaCirculo(double raio) {
    return PI * raio * raio;
}

// 19. Area do retangulo
double areaRetangulo(double base, double altura) {
    return base * altura;
}

// 20. Hipotenusa
double hipotenusa(double a, double b) {
    return sqrt(a * a + b * b);
}


int main() {

    char operacao[20];
    double a, b, c;

    do {

        printf("\nEscolha uma das 20 operacoes:\n");
        printf("+  -  *  /  ^\n");
        printf("raizq raizc  seno  cosseno  tangente\n");
        printf("ln  log  abs  porcentagem  media\n");
        printf("grausrad  radgraus  circulo  retangulo  hipotenusa\n");
        printf("Digite sair para encerrar.\n");

        printf("\nDigite a operacao: ");
        scanf("%19s", operacao);


        // SOMA
        if (strcmp(operacao, "+") == 0) {

            printf("Digite a: ");
            scanf("%lf", &a);

            printf("Digite b: ");
            scanf("%lf", &b);

            c = somar(a, b);

            printf("Resultado: %.2lf\n", c);


        // SUBTRACAO
        } else if (strcmp(operacao, "-") == 0) {

            printf("Digite a: ");
            scanf("%lf", &a);

            printf("Digite b: ");
            scanf("%lf", &b);

            c = subtrair(a, b);

            printf("Resultado: %.2lf\n", c);


        // MULTIPLICACAO
        } else if (strcmp(operacao, "*") == 0) {

            printf("Digite a: ");
            scanf("%lf", &a);

            printf("Digite b: ");
            scanf("%lf", &b);

            c = multiplicar(a, b);

            printf("Resultado: %.2lf\n", c);


        // DIVISAO
        } else if (strcmp(operacao, "/") == 0) {

            printf("Digite a: ");
            scanf("%lf", &a);

            printf("Digite b: ");
            scanf("%lf", &b);

            if (b != 0) {

                c = dividir(a, b);

                printf("Resultado: %.2lf\n", c);

            } else {

                printf("Erro: divisao por zero.\n");
            }


        // POTENCIA
        } else if (strcmp(operacao, "^") == 0) {

            printf("Digite a: ");
            scanf("%lf", &a);

            printf("Digite b: ");
            scanf("%lf", &b);

            c = potencia(a, b);

            printf("Resultado: %.2lf\n", c);


        // RAIZ QUADRADA
        } else if (strcmp(operacao, "raizq") == 0) {

            printf("Digite o numero: ");
            scanf("%lf", &a);

            if (a >= 0) {

                c = raizQuadrada(a);

                printf("Resultado: %.2lf\n", c);

            } else {

                printf("Erro: numero invalido.\n");
            }


        // RAIZ CUBICA
        } else if (strcmp(operacao, "raizc") == 0) {

            printf("Digite o numero: ");
            scanf("%lf", &a);

            c = raizCubica(a);

            printf("Resultado: %.2lf\n", c);


        // SENO
        } else if (strcmp(operacao, "seno") == 0) {

            printf("Digite o angulo em graus: ");
            scanf("%lf", &a);

            c = seno(a);

            printf("Resultado: %.4lf\n", c);


        // COSSENO
        } else if (strcmp(operacao, "cosseno") == 0) {

            printf("Digite o angulo em graus: ");
            scanf("%lf", &a);

            c = cosseno(a);

            printf("Resultado: %.4lf\n", c);


        // TANGENTE
        } else if (strcmp(operacao, "tangente") == 0) {

            printf("Digite o angulo em graus: ");
            scanf("%lf", &a);

            c = tangente(a);

            printf("Resultado: %.4lf\n", c);


        // LOGARITMO NATURAL
        } else if (strcmp(operacao, "ln") == 0) {

            printf("Digite o numero: ");
            scanf("%lf", &a);

            if (a > 0) {

                c = logNatural(a);

                printf("Resultado: %.4lf\n", c);

            } else {

                printf("Erro: numero invalido.\n");
            }


        // LOGARITMO BASE 10
        } else if (strcmp(operacao, "log") == 0) {

            printf("Digite o numero: ");
            scanf("%lf", &a);

            if (a > 0) {

                c = logBase10(a);

                printf("Resultado: %.4lf\n", c);

            } else {

                printf("Erro: numero invalido.\n");
            }


        // VALOR ABSOLUTO
        } else if (strcmp(operacao, "abs") == 0) {

            printf("Digite o numero: ");
            scanf("%lf", &a);

            c = valorAbsoluto(a);

            printf("Resultado: %.2lf\n", c);


        // PORCENTAGEM
        } else if (strcmp(operacao, "porcentagem") == 0) {

            printf("Digite a porcentagem: ");
            scanf("%lf", &a);

            printf("Digite o valor: ");
            scanf("%lf", &b);

            c = porcentagem(a, b);

            printf("Resultado: %.2lf\n", c);


        // MEDIA
        } else if (strcmp(operacao, "media") == 0) {

            printf("Digite a: ");
            scanf("%lf", &a);

            printf("Digite b: ");
            scanf("%lf", &b);

            c = media(a, b);

            printf("Media: %.2lf\n", c);


        // GRAUS PARA RADIANOS
        } else if (strcmp(operacao, "grausrad") == 0) {

            printf("Digite o valor em graus: ");
            scanf("%lf", &a);

            c = grausParaRadianos(a);

            printf("Resultado: %.4lf\n", c);


        // RADIANOS PARA GRAUS
        } else if (strcmp(operacao, "radgraus") == 0) {

            printf("Digite o valor em radianos: ");
            scanf("%lf", &a);

            c = radianosParaGraus(a);

            printf("Resultado: %.4lf\n", c);


        // AREA DO CIRCULO
        } else if (strcmp(operacao, "circulo") == 0) {

            printf("Digite o raio: ");
            scanf("%lf", &a);

            if (a >= 0) {

                c = areaCirculo(a);

                printf("Area do circulo: %.2lf\n", c);

            } else {

                printf("Erro: raio invalido.\n");
            }


        // AREA DO RETANGULO
        } else if (strcmp(operacao, "retangulo") == 0) {

            printf("Digite a base: ");
            scanf("%lf", &a);

            printf("Digite a altura: ");
            scanf("%lf", &b);

            if (a >= 0 && b >= 0) {

                c = areaRetangulo(a, b);

                printf("Area do retangulo: %.2lf\n", c);

            } else {

                printf("Erro: valores invalidos.\n");
            }


        // HIPOTENUSA
        } else if (strcmp(operacao, "hipotenusa") == 0) {

            printf("Digite o primeiro cateto: ");
            scanf("%lf", &a);

            printf("Digite o segundo cateto: ");
            scanf("%lf", &b);

            if (a >= 0 && b >= 0) {

                c = hipotenusa(a, b);

                printf("Hipotenusa: %.2lf\n", c);

            } else {

                printf("Erro: valores invalidos.\n");
            }


        // SAIR
        } else if (strcmp(operacao, "sair") == 0) {

            printf("Calculadora encerrada.\n");


        // OPERACAO INVALIDA
        } else {

            printf("Operacao invalida.\n");
        }

    } while (strcmp(operacao, "sair") != 0);

    return 0;
}
