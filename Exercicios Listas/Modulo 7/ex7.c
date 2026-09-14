/*Crie um programa em Linguagem C que resolva o seguinte problema: 
Cálculo de formas geométricas. Acesse o site https://www.todamateria.com.br/area-e-perimetro/
Entrada
Todas as entradas são valores reais com dupla precisão (double). O valor de PI é constante e deve ser 3,1415.
Calcule a área de um trapézio de bases de 20 cm e 5cm, e altura 12cm. Para isso, receba o valor da base maior, da base menor, e da altura.
Saída
Area do trapezio = 150.00 cm*cm
*/

//Área do trapézio A = (B + b) * h / 2

#include <stdio.h>
#include <stdlib.h>

//declarando a constante
#define PI 3.1415

int main(){

    //declarando as variáveis
    double baseMaior;
    double baseMenor;
    double altura;
    double valor_area;

    printf("=- Calculadora de Area de Trapezio! -= \n");


    //Imprimindo e recebendo os valores de cada variável
    printf("Digite o valor da base menor: \n");
    scanf("%lf", &baseMenor);

    printf("Digite o valor da base maior: \n");
    scanf("%lf", &baseMaior);

    printf("Digite o valor da altura: \n");
    scanf("%lf", &altura);

    valor_area = ((baseMaior + baseMenor) * altura) / 2;

    //imprimindo o valor da área
    printf("O valor da area do trapezio e: %.2lf \n", valor_area);

    return 0;

}