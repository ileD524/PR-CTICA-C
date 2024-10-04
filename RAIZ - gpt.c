//Hallar la RAIZ de un número - Hecho por Chat gpt.

#include <stdio.h>

float square_root(float num) {
    float epsilon = 0.00001; // Precisión deseada
    float guess = 1.0; // Estimación inicial
    
    while (1) {
        float next_guess = 0.5 * (guess + num / guess); // Fórmula de Newton-Raphson
        
        if (guess - next_guess < epsilon && next_guess - guess < epsilon) {
            // Si la diferencia entre las estimaciones es menor que la precisión deseada, salimos del bucle
            break;
        }
        
        guess = next_guess; // Actualizamos la estimación
    }
    
    return guess; // Devolvemos la estimación final
}

int main() {
    float num;
    char res;
    
    do{
        printf("\nIngrese un número para calcular su raíz cuadrada: ");
        scanf(" %f", &num);
    
        if (num < 0) {
            printf("\nNo se puede calcular la raíz cuadrada de un número negativo.\n");
        } else {
            printf("\nLa raíz cuadrada de %g es %g\n", num, square_root(num));
        }
        printf("\n¿Quieres ingresar otro número? (S/N): ");
        fflush(stdin);
        scanf(" %c", &res);

    }while(res == 's' || res == 'S');

    
    return 0;
}

