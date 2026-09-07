/* Início
   //Constante do tipo float
   DECLARAR   A ← 3.1415    CONSTANTE FLOAT
   DECLARAR   B ← 123         CONSTANTE INTEIRO

   IMPRIMIR “O valor de A:”
   IMPRIMIR  A    
   IMPRIMIR “O valor de B:”
   IMPRIMIR  B

Fim
*/

#include <stdio.h>

//declarando uma contante A (Para declarar uma constante não utilizamos o sinal de igualdade = Apenas o nome da constante e o seu valor logo em seguida)
#define A 3.1415 

//declarando uma contante A
#define B 123

int main(){

    //imprimindo o valor de A
    printf("O valor de A: %f \n", A);

    //imprimindo o valor de B
    printf("O valor de B: %i \n", B);

    return 0;

}