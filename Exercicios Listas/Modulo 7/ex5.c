/* Crie um programa em Linguagem C que resolva o seguinte problema: 
Cálculo de formas geométricas. 
Acesse o site https://www.todamateria.com.br/area-e-perimetro/
Entrada
Todas as entradas são valores reais com dupla precisão (double). O valor de PI é constante e deve ser 3,1415.
Calcule a área de um triângulo de base 5cm e altura 12cm. Para isso, receba dois valores de entrada, um para a base e outro para a altura.
Saída
Area do triangulo = 30.00 cm*cm
 */

//Fórmula de um triangulo A = (b * h) / 2


#include <stdio.h>
#include <stdlib.h>


//definindo a constante de PI
#define PI 3.1415

int main(){

    //declarando as variáveis
    double base;
    double altura;
    double valor_area;

    printf("=- Calculadora de Area de Triangulos! -= \n");

    printf("Digite o valor da base: \n");
    scanf("%lf", &base); //se usa %lf para double

    printf("Digite o valor da altura: \n");
    scanf("%lf", &altura);

    valor_area = (base * altura) / 2;

    //imprimindo o valor da área
    printf("O valor da area do triangulo e: %.2lf \n", valor_area);

    return 0;

}