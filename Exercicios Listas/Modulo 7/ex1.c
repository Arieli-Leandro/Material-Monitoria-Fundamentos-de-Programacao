#include <stdio.h>
#include <stdlib.h>


int main(){

    printf("=- Traduzindo de Expressoes Matematica -=\n");
    
    double A;
    double B = 16;
    double C = 4;

    // 1. A = B / C
    A = B / C;
    printf("1. A = %.2lf\n", A);
    
    // 2. A = B / (C / A)  [usando A = 2.0 como valor inicial]
    A = 2.0;
    A = B / (C / A);
    printf("2. A = %.2lf\n", A);
    
    // 3. A = sqrt(B) / (C * A)
    A = 2.0;
    A = sqrt(B) / (C * A);
    printf("3. A = %.2lf\n", A);
    
    // 4. A = abs(-A) [usando abs para int / fabs para double]
    A = -5.0;
    A = fabs(-A);
    printf("4. A = %.2lf\n", A);
    
    // 5. A = sqrt(B / C)
    A = sqrt(B / C);
    printf("5. A = %.2lf\n", A);
    
    // 6. A = pow(sqrt(B / C), A)
    A = 2.0;
    A = pow(sqrt(B / C), A);
    printf("6. A = %.2lf\n", A);
    
    // 7. A = sqrt(B / C) / abs(-A)
    A = 2.0;
    A = (sqrt(B / C)) / fabs(-A);
    printf("7. A = %.2lf\n", A);
    
    // 8. A = cos(B) / sin(C)
    A = cos(B) / sin(C);
    printf("8. A = %.2lf\n", A);
    
    // 9. A = pow(sqrt(B / C), A) / (1 / tan(A))
    A = 1.0;
    A = pow(sqrt(B / C), A) / (1.0 / tan(A));
    printf("9. A = %.2lf\n", A);
    
    // 10. A = 1 + 2 + 3 + 4 + 5 (Somatorio de x=1 ate 5)
    int A_sum = 0;
    A_sum = 1 + 2 + 3 + 4 +5;
    printf("10. A = %lf\n\n", A_sum);

    return 0;

}