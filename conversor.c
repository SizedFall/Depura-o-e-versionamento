#include "conversor.h"

double wattsParaQuilowatts(double watts) {
    return watts / 1000.0;
}

double wattsParaCV(double watts) {
    return watts / 735.5; 
}

double quilowattsParaWatts(double quilowatts) {
    return quilowatts * 1000.0;
}

double quilowattsParaCV(double quilowatts) {
    return quilowatts * 1000.0 / 735.5;
}

double cvParaWatts(double cv) {
    return cv * 735.5;
}

double cvParaQuilowatts(double cv) {
    return cv * 735.5 / 1000.0;
}

// Menu do programa
void exibirMenu() {
    printf("\n=== Conversor de Unidades de Potência ===\n");
    printf("Escolha uma das opções:\n");
    printf("1. Watts (W) para Quilowatts (kW)\n");
    printf("2. Watts (W) para Cavalos-vapor (cv)\n");
    printf("3. Quilowatts (kW) para Watts (W)\n");
    printf("4. Quilowatts (kW) para Cavalos-vapor (cv)\n");
    printf("5. Cavalos-vapor (cv) para Watts (W)\n");
    printf("6. Cavalos-vapor (cv) para Quilowatts (kW)\n");
    printf("0. Sair\n");
    printf("Digite sua escolha: ");
}

int menuConversorPotencia() {
    int opcao;
    double valor, resultado;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nDigite o valor em Watts (W): ");
                scanf("%lf", &valor);
                resultado = wattsParaQuilowatts(valor);
                printf("%.2f W = %.2f kW\n", valor, resultado);
                break;

            case 2:
                printf("\nDigite o valor em Watts (W): ");
                scanf("%lf", &valor);
                resultado = wattsParaCV(valor);
                printf("%.2f W = %.2f cv\n", valor, resultado);
                break;

            case 3:
                printf("\nDigite o valor em Quilowatts (kW): ");
                scanf("%lf", &valor);
                resultado = quilowattsParaWatts(valor);
                printf("%.2f kW = %.2f W\n", valor, resultado);
                break;

            case 4:
                printf("\nDigite o valor em Quilowatts (kW): ");
                scanf("%lf", &valor);
                resultado = quilowattsParaCV(valor);
                printf("%.2f kW = %.2f cv\n", valor, resultado);
                break;

            case 5:
                printf("\nDigite o valor em Cavalos-vapor (cv): ");
                scanf("%lf", &valor);
                resultado = cvParaWatts(valor);
                printf("%.2f cv = %.2f W\n", valor, resultado);
                break;

            case 6:
                printf("\nDigite o valor em Cavalos-vapor (cv): ");
                scanf("%lf", &valor);
                resultado = cvParaQuilowatts(valor);
                printf("%.2f cv = %.2f kW\n", valor, resultado);
                break;

            case 0:
                printf("\nSaindo do programa...\n");
                break;

            default:
                printf("\nOpção inválida! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
