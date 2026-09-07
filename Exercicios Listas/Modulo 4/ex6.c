#include <stdio.h>

int main(){

    //Declarando as variáveis
    float valor_km;
    float valor_ms;

    printf("--- Programa Conversor de Velocidade ---\n");

    //imprimindo o texto
    printf("Informe a velocidade em km/h: ");
    //recebendo o valor em kilometros
    scanf("%f", &valor_km);

    //Convertendo para metros por segundo
    valor_ms = valor_km / 36;

    //Imprimindo o valor convertido
    printf("A velocidade em m/s e: %.2f", valor_ms);

    return 0;

}