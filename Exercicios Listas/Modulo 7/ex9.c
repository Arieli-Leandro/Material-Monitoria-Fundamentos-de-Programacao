/*Crie um programa em Linguagem C que resolva o seguinte problema: 
Cálculo de formas geométricas. Acesse o site https://www.todamateria.com.br/area-e-perimetro/
Entrada
Todas as entradas são valores reais com dupla precisão (double). O valor de PI é constante e deve ser 3,1415.
Calcule a área de um hexágono de lados de 10cm. Para isso, receba o comprimento de um dos lados.
Saída
Area do hexagono = 259.81 cm*cm
*/

//Área do hexagono A = 3V3/ 2 * L^2

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //vamos usar a função sqrt() e a pow()

#define PI 3.1415

int main(){

    //declarando as variáveis
    double lado;
    double valor_area;

    printf("=- Calculadora de Area de Hexagono! -= \n");

    //Imprimindo e recebendo os valores de cada variável
    printf("Digite o valor do lado: \n");
    scanf("%lf", &lado);

    valor_area = (3 * sqrt(3) / 2) * pow(lado, 2);
    //imprimindo o valor da área
    printf("O valor da area do Hexagono e: %.2lf \n", valor_area);

    return 0;

}