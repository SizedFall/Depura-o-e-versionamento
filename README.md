# Tarefa do EmbarcaTech

Equipe: Grupo 0, Subgrupo 6

## Compilação

O projeto é feito em C. Para compilar, basta compilar o arquivo `main.c`
e executar o código resultante.

## Uso da aplicação

### Menu de conversão de Comprimeto

# Conversor de Unidades de Comprimento

Este é um programa em C que converte valores de comprimento entre diferentes unidades: metros, centímetros e milímetros. O programa permite ao usuário escolher a conversão desejada através de um menu interativo.

## Funcionalidades

- Converter metros para centímetros
- Converter metros para milímetros
- Converter centímetros para metros
- Converter milímetros para metros

## Como Usar

1. Clone o repositório para sua máquina local.
2. Compile o programa com um compilador C, como `gcc`.
3. Execute o programa no terminal.

### Exemplo de Compilação e Execução

```sh
gcc -o conversor conversor.c
./conversor


Estrutura do Código
O código está organizado em funções para facilitar a leitura e manutenção:

float metrosParaCentimetros(float metros)

float metrosParaMilimetros(float metros)

float centimetrosParaMetros(float centimetros)

float milimetrosParaMetros(float milimetros)

Cada função realiza a conversão correspondente. O programa principal (main) exibe um menu e chama as funções apropriadas com base na escolha do usuário.

Exemplo de Saída
Conversor de Unidades de Comprimento
1. Metros para Centímetros
2. Metros para Milímetros
3. Centímetros para Metros
4. Milímetros para Metros
5. Sair

Escolha uma opcao (1-5): 1
Digite o valor em metros: 1.23
1.23 metros equivalem a 123.00 centímetros.


DESENVOLVIDO POR: FERNANDOCORTESNINO
