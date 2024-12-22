// Importações
#include <stdio.h>
#include <math.h>

// Definições das funções
double segundosParaMinutos(double seg);
double segundosParaHoras(double seg);
double minutosParaSegundos(double min);
double minutosParaHoras(double min);
double horasParaMinutos(double min);
double horasParaSegundos(double min);
double wattsParaQuilowatts(double watts);
double wattsParaCV(double watts);
double quilowattsParaWatts(double quilowatts);
double quilowattsParaCV(double quilowatts);
double cvParaWatts(double cv);
double cvParaQuilowatts(double cv);
void menuConversaoTempo(void);
void menuConversaoComprimento(void);
double menuConversaoMassa(void);

int main(void)
{
    int opcao, continuar = 1;

    printf("Bem vindo ao menu de conversoes! \n");
    printf("----------------------------------- \n");

    while (continuar == 1)
	{
		printf("Qual conversao deseja realizar? \n");
		printf("1- Unidades de distancia \n");
		printf("2- Unidades de tempo \n");
		printf("3- Unidades de potencia \n");
		printf("4- Unidades de temperatura \n");
		printf("5- Unidades de massa \n");
		printf("6- Sair \n");
		scanf("%d", &opcao);

		switch (opcao)
		{
			case 1: // Chamar a função responsável pela conversão das unidades de distancia
				break;

			case 2: // Chamar a função responsável pela conversão das unidades de tempo
				menuConversaoTempo();
				break;

			case 3: // Chamar a função responsável pela conversão das unidades de potência
				break;

			case 4: // Chamar a função responsável pela conversão das unidades de temperatura
				break;

			case 5: // Chamar a função responsável pela conversão das unidades de massa
				menuConversaoMassa();
				break;

			case 6: // Sair do menu e encerrar o programa
				continuar = 0;
				printf("6 foi escolhido, saindo do programa \n");
				break;
		}
    }

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

double wattsParaQuilowatts(double watts)
{
    return watts / 1000.0;
}

double wattsParaCV(double watts)
{
    return watts / 735.5;
}

double quilowattsParaWatts(double quilowatts)
{
    return quilowatts * 1000.0;
}

double quilowattsParaCV(double quilowatts)
{
    return quilowatts * 1000.0 / 735.5;
}

double cvParaWatts(double cv)
{
    return cv * 735.5;
}

double cvParaQuilowatts(double cv)
{
    return cv * 735.5 / 1000.0;
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

double menuConversaoMassa(void)
{
    double massa, valorConvertido;
    int unidAtual, unidNova;

    printf("Informe a massa que deseja converter: ");
    scanf("%lf", &massa);

    do
	{
        printf("\nInforme a unidade de medida atual: \n     (1) gramas\n     (2) quilos\n     (3) toneladas\n");
        scanf("%d", &unidAtual);
        printf("\nInforme a unidade de medida para conversão: \n     (1) gramas\n     (2) quilos\n     (3) toneladas\n");
        scanf("%d", &unidNova);
        if (unidAtual<1 || unidAtual>3 || unidNova<1 || unidNova>3)
		{
            printf("\nCódigo inválido, tente novamente: ");
        }
    }
	while (unidAtual<1 || unidAtual>3 || unidNova<1 || unidNova>3);

    switch (unidAtual)
	{
        case 1:
            switch (unidNova)
			{
                case 1:
                    valorConvertido = massa;
                    printf("\n%.3lf g = %.3lf g", massa, valorConvertido);
                    break;
                case 2:
                    valorConvertido = massa/1000;
                    printf("\n%.3lf g = %.3lf kg", massa, valorConvertido);
                    break;
                case 3:
                    valorConvertido = massa/pow(10,6);
                    printf("\n%.3lf g = %.3lf t", massa, valorConvertido);
                    break;
                default:
                    break;
            }
			break;

        case 2:
            switch (unidNova){
                case 1:
                    valorConvertido = massa*1000;
                    printf("\n%.3lf kg = %.3lf g", massa, valorConvertido);
                    break;
                case 2:
                    valorConvertido = massa;
                    printf("\n%.3lf kg = %.3lf kg", massa, valorConvertido);
                    break;
                case 3:
                    valorConvertido = massa/1000;
                    printf("\n%.3lf kg = %.3lf t", massa, valorConvertido);
                    break;
                default:
                    break;
            }
			break;

        case 3:
            switch (unidNova)
			{
                case 1:
                    valorConvertido = massa*pow(10,6);
                    printf("\n%.3lf t = %.3lf g", massa, valorConvertido);
                    break;
                case 2:
                    valorConvertido = massa*1000;
                    printf("\n%.3lf t = %.3lf kg", massa, valorConvertido);
                    break;
                case 3:
                    valorConvertido = massa;
                    printf("\n%.3lf t = %.3lf t", massa, valorConvertido);
                    break;
                default:
                    break;
            }
			break;

        default:
            break;
    }
    return valorConvertido;
} 
