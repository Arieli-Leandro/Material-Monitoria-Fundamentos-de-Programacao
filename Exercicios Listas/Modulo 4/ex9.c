/* Implemente o Fluxograma

Inicio -> A -> A = 2 * A -> A -> B -> B = 3 * B -> B -> C -> C = 4 * C -> C -> Fim

*/

#include <stdio.h>

int main(){

    int A, B, C;

    printf("Digite o valor de A: ");
    scanf("%i", &A);

    A = 2 * A;

    printf("A = %i \n", A);

    printf("Digite o valor de B: ");
    scanf("%i", &B);

    B = 3 * B;
    
    printf("B = %i \n", B);

    printf("Digite o valor de C: ");
    scanf("%i", &C);

    C = 4 * C;

    printf("C = %i \n", C);

    return 0;

}
