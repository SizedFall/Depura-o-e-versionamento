// Importações

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Definições das funções

/// Conversão de bytes

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
void removerDasOpcoesPorIndex(int opcoes[], int *tamanho, int index);
int obterInputDoUsuario(int opcoesValidas[],int tamanho);

int main(int argc, char const *argv[])
{
    return 0;
}

// Implementação das funções

/// Conversão de bytes

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