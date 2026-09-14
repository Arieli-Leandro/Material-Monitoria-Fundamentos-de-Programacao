#include <stdio.h>
#include <stdlib.h>


int main(){

    printf("=- Incrementos, Decrementos e Atribuicoes -=\n");
    
    int A;
    int B;
    
    // Ex 1
    A = 1; 
    B = 2;
    A = A + B;
    printf("1. Saida: %d\n", A);
    
    // Ex 2
    A = 1; 
    B = 2;
    B = A + B;
    printf("2. Saida: %d\n", B);
    
    // Ex 3
    A = 1; 
    B = 2;
    B++;
    printf("3. Saida: %d\n", B);
    
    // Ex 4
    A = 1; 
    B = 2;
    ++B;
    printf("4. Saida: %d\n", B);
    
    // Ex 5
    A = 1; 
    B = 2;
    A--;
    printf("5. Saida: %d\n", A);
    
    // Ex 6
    A = 1; 
    B = 2;
    B = A++;
    printf("6. Saida: %d\n", B);
    
    // Ex 7
    A = 1; 
    B = 2;
    B = ++A;
    printf("7. Saida: %d\n", B);
    
    // Ex 8
    A = 1; 
    B = 2;
    B = ++A;
    printf("8. Saida: %d\n", A);
    
    // Ex 9
    A = 1; 
    B = 2;
    B = (A++) + (B--);
    printf("9. Saida: %d\n", B);
    
    // Ex 10
    A = 1; 
    B = 2;
    B = (++A) + (--B);
    printf("10. Saida: %d\n\n", B);

    return 0;

}