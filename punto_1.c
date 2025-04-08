#include <stdio.h>
void intercambioNumeros (int *a, int *b) {
    int aux= *a;
    *a = *b;
    *b = aux;
}
int main () {
    int Num1, Num2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &Num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &Num2);
    printf("Antes: %d %d \n", Num1, Num2);
    intercambioNumeros(&Num1, &Num2);
    printf("Despues: %d %d", Num1, Num2);
}