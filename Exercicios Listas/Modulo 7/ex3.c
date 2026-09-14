#include <stdio.h>
#include <stdlib.h>


int main(){

    printf("=- Precedencia de Operadores e Divisao por Zero -=\n");
    
    double A;
    double B;
    
    // 1.
    A = 7.0 + 7.0 * 7.0 / 7.0 - 7.0;
    printf("1. A = %lf\n", A);
    
    // 2.
    B = (7.0 + 7.0) * 7.0 / 7.0 - 7.0;
    printf("2. B = %lf\n", B);
    
    // 3, 4 e 5 resultam em divisão por zero (indeterminação matemática)
    printf("3. C = (7 + 7 * 7 / (7 - 7)) -> Divisao por zero (Indeterminado)\n");
    printf("4. D = (7 + 7 * (7 / (7 - 7))) -> Divisao por zero (Indeterminado)\n");
    printf("5. E = (7 + (7 * (7 / (7 - 7)))) -> Divisao por zero (Indeterminado)\n");

    return 0;

}