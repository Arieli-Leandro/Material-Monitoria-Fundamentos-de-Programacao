#include <stdio.h>

int main(){

    //declarando as variáveis
    float valor_fahrenheit;
    float valor_celsius;

    //Imprimindo o texto
    printf("Informe a temperatura em graus Celsius: ");
    //Recebendo o valor em celsius
    scanf("%f", &valor_celsius);

    //Convertendo o valor
    valor_fahrenheit = valor_celsius * (9.0/5.0) + 32;

    //Imprimindo o valor convertido
    printf("A temperatura em Fahrenheit e: %.2f", valor_fahrenheit);

    return 0;

}