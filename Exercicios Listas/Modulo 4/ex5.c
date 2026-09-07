/*
Início
   //Declarar variaveis
   DECLARAR   distancia, velocidade, tempo    FLOAT

   IMPRIMIR “Calculo de velocidade do veiculo”
   IMPRIMIR “Informe a distancia:”
   LER   distancia

   IMPRIMIR “Informe o tempo:”
   LER   tempo
      
   velocidade =  distancia / tempo

   IMPRIMIR “A velocidade eh:”
   IMPRIMIR  velocidade

Fim
*/

#include <stdio.h>

int main(){

    //Declarando as variáveis
    float distancia;
    float velocidade;
    float tempo;

    printf("--- Programa de Calculo de velocidade de veiculo --- \n");

    //imprimindo o texto sobre a distancia
    printf("Informe a distancia: ");
    //Recebendo o valor da distância
    scanf("%f", &distancia);

    //imprimindo o texto sobre a tempo
    printf("Informe o tempo: ");
    //Recebendo o valor do tempo
    scanf("%f", &tempo);

    //Calculando a velocidade
    velocidade = distancia / tempo;

    //imprimindo o valor da velocidade
    printf("A velocidade e: %2.f", velocidade);

    return 0;

}