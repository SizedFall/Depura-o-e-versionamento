#include <stdio.h>

// Funções de conversão
float metrosParaCentimetros(float metros) {
    return metros * 100;
}

float metrosParaMilimetros(float metros) {
    return metros * 1000;
}

float centimetrosParaMetros(float centimetros) {
    return centimetros / 100;
}

float milimetrosParaMetros(float milimetros) {
    return milimetros / 1000;
}

// Funções para cada caso
void converterMetrosParaCentimetros() {
    float valor;
    printf("Digite o valor em metros: ");
    scanf("%f", &valor);
    printf("%.2f metros equivalem a %.2f centímetros.\n", valor, metrosParaCentimetros(valor));
}

void converterMetrosParaMilimetros() {
    float valor;
    printf("Digite o valor em metros: ");
    scanf("%f", &valor);
    printf("%.2f metros equivalem a %.2f milímetros.\n", valor, metrosParaMilimetros(valor));
}

void converterCentimetrosParaMetros() {
    float valor;
    printf("Digite o valor em centímetros: ");
    scanf("%f", &valor);
    printf("%.2f centímetros equivalem a %.2f metros.\n", valor, centimetrosParaMetros(valor));
}

void converterMilimetrosParaMetros() {
    float valor;
    printf("Digite o valor em milímetros: ");
    scanf("%f", &valor);
    printf("%.2f milímetros equivalem a %.2f metros.\n", valor, milimetrosParaMetros(valor));
}

int main() {
    int opcao;

    // Menu de opções
    printf("Conversor de Unidades de Comprimento\n");
    printf("1. Metros para Centímetros\n");
    printf("2. Metros para Milímetros\n");
    printf("3. Centímetros para Metros\n");
    printf("4. Milímetros para Metros\n");
    printf("5. Sair\n");

    while (1) {
        printf("\nEscolha uma opcao (1-5): ");
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida! Por favor, insira um numero.\n");
            while (getchar() != '\n'); // Limpa o buffer
            continue;
        }

        if (opcao == 5) {
            printf("Encerrando o programa.\n");
            break;
        }

        switch (opcao) {
            case 1:
                converterMetrosParaCentimetros();
                break;
            case 2:
                converterMetrosParaMilimetros();
                break;
            case 3:
                converterCentimetrosParaMetros();
                break;
            case 4:
                converterMilimetrosParaMetros();
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}
