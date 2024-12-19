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
