#include <stdio.h>

double celsiusParaFahrenheit(double c) {
    return (9.0 / 5.0) * c + 32;
}

double celsiusParaKelvin(double c) {
    return c + 273.15;
}

double fahrenheitParaCelsius(double f) {
    return (5.0 / 9.0) * (f - 32);
}

double fahrenheitParaKelvin(double f) {
    return (5.0 / 9.0) * (f - 32) + 273.15;
}

double kelvinParaCelsius(double k) {
    return k - 273.15;
}

double kelvinParaFahrenheit(double k) {
    return (9.0 / 5.0) * (k - 273.15) + 32;
}

int main() {

    int opcao;
    double temperatura;
    double resultado;

    printf("=== CONVERSOR DE TEMPERATURAS ===\n\n");

    printf("1 - Celsius -> Fahrenheit\n");
    printf("2 - Celsius -> Kelvin\n");
    printf("3 - Fahrenheit -> Celsius\n");
    printf("4 - Fahrenheit -> Kelvin\n");
    printf("5 - Kelvin -> Celsius\n");
    printf("6 - Kelvin -> Fahrenheit\n");

    printf("\nEscolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &temperatura);

            resultado = celsiusParaFahrenheit(temperatura);

            printf("Resultado: %.2f Fahrenheit\n", resultado);
            break;

        case 2:
            printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &temperatura);

            resultado = celsiusParaKelvin(temperatura);

            printf("Resultado: %.2f Kelvin\n", resultado);
            break;

        case 3:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%lf", &temperatura);

            resultado = fahrenheitParaCelsius(temperatura);

            printf("Resultado: %.2f Celsius\n", resultado);
            break;

        case 4:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%lf", &temperatura);

            resultado = fahrenheitParaKelvin(temperatura);

            printf("Resultado: %.2f Kelvin\n", resultado);
            break;

        case 5:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%lf", &temperatura);

            resultado = kelvinParaCelsius(temperatura);

            printf("Resultado: %.2f Celsius\n", resultado);
            break;

        case 6:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%lf", &temperatura);

            resultado = kelvinParaFahrenheit(temperatura);

            printf("Resultado: %.2f Fahrenheit\n", resultado);
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
