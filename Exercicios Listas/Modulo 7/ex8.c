/*Crie um programa em Linguagem C que resolva o seguinte problema: Cálculo de formas geométricas. Acesse o site https://www.todamateria.com.br/area-e-perimetro/
Entrada
Todas as entradas são valores reais com dupla precisão (double). O valor de PI é constante e deve ser 3,1415.
Calcule a área de um losango de diagonais 16cm e 9cm. Para isso, receba o comprimento da diagonal maior e da diagonal menor.
Saída
Area do losango = 72.00 cm*cm
*/

//Área do Losango A = (D*d)/2

#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

int main(){

    //declarando as variáveis
    double diagonalMaior;
    double diagonalMenor;
    double valor_area;

    printf("=- Calculadora de Area de Losango! -= \n");

    //Imprimindo e recebendo os valores de cada variável
    printf("Digite o valor da diagonal maior: \n");
    scanf("%lf", &diagonalMaior);

    printf("Digite o valor da diagonal menor: \n");
    scanf("%lf", &diagonalMenor);

    valor_area = (diagonalMaior * diagonalMenor) / 2;
    //imprimindo o valor da área
    printf("O valor da area do Losango e: %.2lf \n", valor_area);

    return 0;

}