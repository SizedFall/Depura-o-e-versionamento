// Importações
#include <stdio.h>

// Definições das funções
double segundosParaMinutos(double seg);
double segundosParaHoras(double seg);
double minutosParaSegundos(double min);
double minutosParaHoras(double min);
double horasParaMinutos(double min);
double horasParaSegundos(double min);
void menuConversaoTempo(void);
void menuConversaoComprimento(void);

int main(int argc, char const *argv[])
{
    return 0;
}

// Implementação das funções
double segundosParaMinutos(double seg)
{
	return seg / 60.0;
}

double segundosParaHoras(double seg)
{
	return seg / 60.0 / 60.0;
}

double minutosParaSegundos(double min)
{
	return min * 60.0;
}

double minutosParaHoras(double min)
{
	return min / 60.0;
}

double horasParaMinutos(double min)
{
	return min * 60.0;
}

double horasParaSegundos(double min)
{
	return min * 60.0 * 60.0;
}

void menuConversaoTempo(void)
{
	printf("Coversor de unidades de tempo\n");
	while (1) {
		printf("\n");
		printf("1. Segundos para minutos\n");
		printf("2. Segundos para horas\n");
		printf("3. Minutos para segundos\n");
		printf("4. Minutos para horas\n");
		printf("5. Horas para minutos\n");
		printf("6. Horas para segundos\n");
		printf("7. Sair\n");

		int opcao;
		printf("Opção: ");
		scanf("%d", &opcao);

		int parar = 0;

		switch (opcao) {
		case 1: {
			double segundos;
			printf("Digite os segundos: ");
			scanf("%lf", &segundos);
			printf("Resultado: %.2lfm\n", segundosParaMinutos(segundos));
			break;
		}
		case 2: {
			double segundos;
			printf("Digite os segundos: ");
			scanf("%lf", &segundos);
			printf("Resultado: %.2lfh\n", segundosParaHoras(segundos));
			break;
		}
		case 3: {
			double minutos;
			printf("Digite os minutos: ");
			scanf("%lf", &minutos);
			printf("Resultado: %.2lfs\n", minutosParaSegundos(minutos));
			break;
		}
		case 4: {
			double minutos;
			printf("Digite os minutos: ");
			scanf("%lf", &minutos);
			printf("Resultado: %.2lfh\n", minutosParaHoras(minutos));
			break;
		}
		case 5: {
			double horas;
			printf("Digite as horas: ");
			scanf("%lf", &horas);
			printf("Resultado: %.2lfm\n", horasParaMinutos(horas));
			break;
		}
		case 6: {
			double horas;
			printf("Digite as horas: ");
			scanf("%lf", &horas);
			printf("Resultado: %.2lfs\n", horasParaSegundos(horas));
			break;
		}
		case 7:
			parar = 1;
			break;
		default:
			printf("Opção inválida!\n");
			break;
		}

		if (parar)
			break;
	}
}

void menuConversaoComprimento(void)
{
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
}
