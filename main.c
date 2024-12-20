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
void removerDasOpcoesValidasPorIndex(int opcoes[], int *tamanho, int index);
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