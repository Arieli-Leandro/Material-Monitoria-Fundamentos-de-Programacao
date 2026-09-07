#include <stdio.h>

//Declarando a constante de Pi
//Nomeamos constantes em letras maiúsculas
#define PI 3.141592

int main(){

    //Declarando as variáveis
    float valor_angulo_graus;
    float valor_radianos;

    //Imprimindo o texto
    printf("Informe o angulo em graus: ");
    //Recebendo o valor do ângulo em graus
    scanf("%f", &valor_angulo_graus);

    //Convertendo para radianos
    valor_radianos = valor_angulo_graus * PI / 180;

    //Exibindo o valor em radianos
    printf("O valor em radianos e: %.2f", valor_radianos);

    return 0;

}