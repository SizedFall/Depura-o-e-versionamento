// Importações
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

// Definindo um ponteiro para função
typedef double (*ponteiroParaFuncao)(double);

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
void conversaoDeBytes(void);
double bytesParaKilobytes(double bytes);
double bytesParaMegabytes(double bytes);
double bytesParaGigabytes(double bytes);
double bytesParaTerabytes(double bytes);
double kilobytesParaBytes(double kilobytes);
double kilobytesParaMegabytes(double kilobytes);
double kilobytesParaGigabytes(double kilobytes);
double kilobytesParaTerabytes(double kilobytes);
double megabytesParaBytes(double megabytes);
double megabytesParaKilobytes(double megabytes);
double megabytesParaGigabytes(double megabytes);
double megabytesParaTerabytes(double megabytes);
double gigabytesParaBytes(double gigabytes);
double gigabytesParaKilobytes(double gigabytes);
double gigabytesParaMegabytes(double gigabytes);
double gigabytesParaTerabytes(double gigabytes);
double terabytesParaBytes(double terabytes);
double terabytesParaKilobytes(double terabytes);
double terabytesParaMegabytes(double terabytes);
double terabytesParaGigabytes(double terabytes);
void imprimirOpcoes(char *opcoes[], int tamanhoArray, int numeroDaOpcaoIgnorada);
bool opcaoValida(int opcao, int opcoesValidas[], int tamanhoAray);
void removerDasOpcoesValidasPorIndex(int opcoes[], int *tamanho, int index);
int obterInputDoUsuario(int opcoesValidas[],int tamanho);

int main(void)
{
    int opcao, continuar = 1;

    printf("Bem vindo ao menu de conversoes! \n");
    printf("----------------------------------- \n");

    while (continuar == 1)
	{
		printf("Qual conversao deseja realizar? \n");
		printf("1- Unidades de comprimento \n");
		printf("2- Unidades de tempo \n");
		printf("3- Unidades de potencia \n");
		printf("4- Unidades de temperatura \n");
		printf("5- Unidades de massa \n");
		printf("6- Sair \n");
		scanf("%d", &opcao);

		switch (opcao)
		{
			case 1: // Chamar a função responsável pela conversão das unidades de comprimento
				menuConversaoComprimento();
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

void conversaoDeBytes(void){
    char *opcoes[] = {"Bytes",
    "Kilobytes (KB)",
    "Megabytes (MB)",
    "Gigabytes (GB)",
    "Terabytes (TB)"};

    int tamanhoOpcoes = sizeof(opcoes) / sizeof(opcoes[0]);

    int opcoesValidas[] = {1,2,3,4,5};

    int tamanhoOpcoesValidas = sizeof(opcoesValidas) / sizeof(opcoesValidas[0]);

    int primeiraOpcao, segundaOpcao;

    double valor, valorConvertido;

    /* Matriz que armazena ponteiros para funções, pra ficar mais fácil chamar a 
    função correta para a conversão escolhida.
    */
    ponteiroParaFuncao opcoesDeConversao[5][5] = {
        {NULL,bytesParaKilobytes,bytesParaMegabytes,bytesParaGigabytes,bytesParaTerabytes},
        {kilobytesParaBytes,NULL,kilobytesParaMegabytes,kilobytesParaGigabytes,kilobytesParaTerabytes},
        {megabytesParaBytes,megabytesParaKilobytes,NULL,megabytesParaGigabytes,megabytesParaTerabytes},
        {gigabytesParaBytes,gigabytesParaKilobytes,gigabytesParaMegabytes,NULL,gigabytesParaTerabytes},
        {terabytesParaBytes,terabytesParaKilobytes,terabytesParaMegabytes,terabytesParaGigabytes,NULL}
    };

    printf("Bem vindo ao menu de converção das unidades de byte!\nSelecione o número correspondente a unidade que você quer converter, ou pressione 0 para sair:\n\n");

    imprimirOpcoes(opcoes, tamanhoOpcoes, -1);

    printf("Informe sua escolha: ");

    primeiraOpcao = obterInputDoUsuario(opcoesValidas,tamanhoOpcoesValidas);

    removerDasOpcoesValidasPorIndex(opcoesValidas,&tamanhoOpcoesValidas,primeiraOpcao-1);

    printf("\n\nPara qual unidade deseja converter?\n\n");

    imprimirOpcoes(opcoes, tamanhoOpcoes, primeiraOpcao);

    printf("Informe sua escolha: ");

    segundaOpcao = obterInputDoUsuario(opcoesValidas,tamanhoOpcoesValidas);

    printf("\nVocê escolheu converter %s para %s.\n", opcoes[primeiraOpcao - 1], opcoes[segundaOpcao - 1]);

    printf("Informe a quantidade de %s que serão convertidos: ",opcoes[primeiraOpcao-1]);

    scanf("%lf",&valor);

    valorConvertido = opcoesDeConversao[primeiraOpcao-1][segundaOpcao-1](valor);

    printf("%.2lf %s equivalem a %.2lf %s!\n\n",valor,opcoes[primeiraOpcao -1],valorConvertido,opcoes[segundaOpcao-1]);

}

void imprimirOpcoes(char *opcoes[], int tamanhoArray, int numeroDaOpcaoIgnorada){
    for(int contador = 0; contador < tamanhoArray; contador++){
        if(contador + 1 == numeroDaOpcaoIgnorada){
            continue;
        }else{
            printf("%d - %s\n",contador + 1,opcoes[contador]);
        }
    }

    printf("0 - Sair\n\n");
}

// Verifica se a opção inserida pelo usuário é válida
bool opcaoValida(int opcao, int opcoesValidas[], int tamanhoAray){
    for (int contador = 0; contador < tamanhoAray; contador++)
    {
        if(opcao == opcoesValidas[contador]) return true;
    }
    
    return false;
}


int obterInputDoUsuario(int opcoesValidas[],int tamanho){
    int valor;

    scanf("%d",&valor);

    if(valor == 0) exit(0);

    while (!opcaoValida(valor,opcoesValidas,tamanho))
    {
        printf("\nA opção escolhida é inválida, tente novamente: ");

        scanf("%d",&valor);

        if(valor == 0) exit(0);
    }

    return valor;
}

/*
    Remove a primeira opção selecionada pelo usuário do array de opções válidas,
    evitando que a mesma unidade seja selecionada duas vezes, após isso, diminui
    o valor da variável que informa o tamanho do array de opções.
*/
void removerDasOpcoesValidasPorIndex(int opcoes[], int *tamanho, int index){
    for (int contador = index; contador < (*tamanho); contador++)
    {
        opcoes[contador] = opcoes[contador+1];
    }
    
    (*tamanho) --;
}

double bytesParaKilobytes(double bytes) {
    return bytes / 1024.0;
}

double bytesParaMegabytes(double bytes) {
    return bytes / pow(1024.0,2);
}

double bytesParaGigabytes(double bytes){
    return bytes / pow(1024.0,3);
}

double bytesParaTerabytes(double bytes){
    return bytes / pow(1024.0,4);
}

double kilobytesParaBytes(double kilobytes){
    return kilobytes * 1024.0;
}

double kilobytesParaMegabytes(double kilobytes){
    return kilobytes / 1024.0;
}

double kilobytesParaGigabytes(double kilobytes){
    return kilobytes / pow(1024.0,2);
}

double kilobytesParaTerabytes(double kilobytes){
    return kilobytes / pow(1024.0,3);
}

double megabytesParaBytes(double megabytes){
    return megabytes * pow(1024.0,2);
}

double megabytesParaKilobytes(double megabytes){
    return megabytes * 1024.0;
}

double megabytesParaGigabytes(double megabytes){
    return megabytes / 1024.0;
}

double megabytesParaTerabytes(double megabytes){
    return megabytes / pow(1024.0,2);
}

double gigabytesParaBytes(double gigabytes){
    return gigabytes * pow(1024.0,3);
}

double gigabytesParaKilobytes(double gigabytes){
    return gigabytes * pow(1024.0,2);
}

double gigabytesParaMegabytes(double gigabytes){
    return gigabytes * 1024.0;
}

double gigabytesParaTerabytes(double gigabytes){
    return gigabytes / 1024.0;
}

double terabytesParaBytes(double terabytes){
    return terabytes * pow(1024.0,4);
}

double terabytesParaKilobytes(double terabytes){
    return terabytes * pow(1024.0,3);
}

double terabytesParaMegabytes(double terabytes){
    return terabytes * pow(1024.0,2);
}

double terabytesParaGigabytes(double terabytes){
    return terabytes * 1024.0;
}

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

float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}