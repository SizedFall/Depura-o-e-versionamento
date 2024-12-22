#include <stdio.h>
#include <math.h>

double converteMassa (){
    double massa, valorConvertido;
    int unidAtual, unidNova;

    printf("Informe a massa que deseja converter: ");
    scanf("%lf", &massa);

    do{
        printf("\nInforme a unidade de medida atual: \n     (1) gramas\n     (2) quilos\n     (3) toneladas\n");
        scanf("%d", &unidAtual);
        printf("\nInforme a unidade de medida para conversão: \n     (1) gramas\n     (2) quilos\n     (3) toneladas\n");
        scanf("%d", &unidNova);
        if(unidAtual<1 || unidAtual>3 || unidNova<1 || unidNova>3){
            printf("\nCódigo inválido, tente novamente: ");
        }
    } while (unidAtual<1 || unidAtual>3 || unidNova<1 || unidNova>3);

    switch (unidAtual){
        case 1:
            switch (unidNova){
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
            switch (unidNova){
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
