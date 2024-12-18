#include <stdio.h>

int main() {
    int opcao;
    float valor, convertido;

    // Exibe o menu para o usuário
    printf("Conversor de Unidades de Comprimento\n");
    printf("1. Metros para Centímetros\n");
    printf("2. Metros para Milímetros\n");
    printf("3. Centímetros para Metros\n");
    printf("4. Milímetros para Metros\n");
    printf("5. Sair\n");
    
    while (1) {                                              // Precisei de um loop para fazer a chamada das opções de transformação
        printf("\nEscolha uma opcao (1-5): ");
        scanf("%d", &opcao);

        if (opcao == 5) {                                    // saída do conversor de unidade
            printf("Encerrando o programa.\n");
            break;                                           // encerrar a execução do bloco (STOP), mas, aqui ele sai do programa!
        }

        printf("Digite o valor a ser convertido: ");         // valor a ser digitado é um float, decimal com precisão simples
        scanf("%f", &valor);

        switch (opcao) {                                      // como tenho casos rígidos e posso escolher apenas um, o "switch case" é a melhor opçãos
            case 1:     // Metros para Centímetros
                convertido = valor * 100;   // metros para centímetros multiplica por 100
                printf("%.2f metros equivalem a %.2f centímetros.\n", valor, convertido);
                break;                                                                          //encerrar a execução do bloco (STOP), não quero que vá para o próximo caso!
            case 2:    // Metros para Milímetros
                convertido = valor * 1000;  // metros para milímetros multiplica por 1000
                printf("%.2f metros equivalem a %.2f milímetros.\n", valor, convertido);
                break;                                                                          //encerrar a execução do bloco (STOP)
            case 3:    // Centímetros para Metros
                convertido = valor / 100;  // centímetros para metro divide por 100 
                printf("%.2f centímetros equivalem a %.2f metros.\n", valor, convertido);
                break;                                                                          //encerrar a execução do bloco (STOP)
            case 4:   // Milímetros para Metros
                convertido = valor / 1000; // milímetros para metro divide por 1000
                printf("%.2f milímetros equivalem a %.2f metros.\n", valor, convertido);
                break;                                                                          // encerrar a execução do bloco (STOP)
            default:   // vai tratar valores inesperados ou entradas inválidas pois nada será executado caso o valor passado não corresponda a nenhum case.
                printf("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}