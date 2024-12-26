#include <stdio.h>

// Funções de conversão
float metrosParaCentimetros(float metros) { // Função que converte metros para centímetros
    return metros * 100;
}

float metrosParaMilimetros(float metros) {  // Função que converte metros para milímetros
    return metros * 1000;
}

float centimetrosParaMetros(float centimetros) {  // Função que converte centímetros para metros
    return centimetros / 100;
}

float milimetrosParaMetros(float milimetros) {  // Função que converte milímetros para metros

    return milimetros / 1000;
}

// Funções para cada caso
void converterMetrosParaCentimetros() { // Função que lê um valor em metros e imprime o valor em centímetros
    float valor;
    printf("Digite o valor em metros: ");
    scanf("%f", &valor);
    printf("%.2f metros equivalem a %.2f centímetros.\n", valor, metrosParaCentimetros(valor));
}

void converterMetrosParaMilimetros() { // Função que lê um valor em metros e imprime o valor em milímetros
    float valor;
    printf("Digite o valor em metros: ");
    scanf("%f", &valor);
    printf("%.2f metros equivalem a %.2f milímetros.\n", valor, metrosParaMilimetros(valor));
}

void converterCentimetrosParaMetros() {  // Função que lê um valor em centímetros e imprime o valor em metros
    float valor;
    printf("Digite o valor em centímetros: ");
    scanf("%f", &valor);
    printf("%.2f centímetros equivalem a %.2f metros.\n", valor, centimetrosParaMetros(valor));
}

void converterMilimetrosParaMetros() {  // Função que lê um valor em milímetros e imprime o valor em metros
    float valor;
    printf("Digite o valor em milímetros: ");
    scanf("%f", &valor);
    printf("%.2f milímetros equivalem a %.2f metros.\n", valor, milimetrosParaMetros(valor));
}

int main() {  // Função principal
    int opcao;

    // Menu de opções
    printf("Conversor de Unidades de Comprimento\n");
    printf("1. Metros para Centímetros\n");
    printf("2. Metros para Milímetros\n");
    printf("3. Centímetros para Metros\n");
    printf("4. Milímetros para Metros\n");
    printf("5. Sair\n");

    while (1) { // Loop infinito
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
