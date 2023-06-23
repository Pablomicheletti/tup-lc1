/*Crear una función que calcule el cubo de un número real (float). El resultado deberá ser otro número real*/

#include <stdio.h>

float calcularCubo(float numero) {
    float cubo = numero * numero * numero;
    return cubo;
}

int main() {
    float numero, resultado;
    
    printf("Ingresa un n%cmero real: ",163);
    scanf("%f", &numero);
    
    resultado = calcularCubo(numero);
    
    printf("El cubo de %.2f es %.2f\n", numero, resultado);
    
    return 0;
}
