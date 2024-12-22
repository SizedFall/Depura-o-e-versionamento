#include <stdio.h>
#include "conversor.h"
#include "Untitled-2 - TAREFA EMBARCATECH - conversor de unidades de medidas.c"
#include "conversaoMassa.c"
#include "conversor.c"
#include "main.c"

int main (){

    int opcao, continuar = 1;

    printf("Bem vindo ao menu de conversoes! \n");
    printf("----------------------------------- \n");

    while(continuar == 1){
    printf("Qual conversao deseja realizar? \n");
    printf("1- Unidades de distancia \n");
    printf("2- Unidades de tempo \n");
    printf("3- Unidades de potencia \n");
    printf("4- Unidades de temperatura \n");
    printf("5- Unidades de massa \n");
    printf("6- Sair \n");
    scanf("%d", &opcao);

    switch (opcao){

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
            converteMassa();
        break;

        case 6: // Sair do menu e encerrar o programa
            continuar = 0;
            printf("6 foi escolhido, saindo do programa \n");
        break;
    }
    }
return 0;
}