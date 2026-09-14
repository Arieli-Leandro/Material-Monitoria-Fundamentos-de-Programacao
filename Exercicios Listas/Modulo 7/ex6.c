/*Crie um programa em Linguagem C que resolva o seguinte problema: Cálculo de formas geométricas. Acesse o site https://www.todamateria.com.br/area-e-perimetro/
Entrada
Todas as entradas são valores reais com dupla precisão (double). O valor de PI é constante e deve ser 3,1415.
Calcule a área de um círculo com diâmetro de 14cm. Para isso, receba o comprimento do raio.
Saída
Area do circulo = 153.93 cm*cm
 */

// Área do Círculo pi * (raio)^2

#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Precisamos da math.h para usar o pow() -> Função que eleva o número a um expoente

//Definindo a constante PI
#define PI 3.1415

int main(){

    //declarando as variáveis
    double raio;
    double valor_area;

    printf("=- Calculadora de Area de Circulos! -= \n");

    printf("Digite o valor do raio: \n");
    scanf("%lf", &raio); //se usa %lf para double

    valor_area = PI * pow(raio, 2);

    //imprimindo o valor da área
    printf("O valor da area do circulo e: %.2lf \n", valor_area);

    return 0;

}