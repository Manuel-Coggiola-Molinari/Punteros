#include <stdio.h>
int calcularSuma(int *arr, int largo);

float calcularPromedio(int *arr, int largo);

int main(){
	int largo;
	printf("Ingresa el largo del arreglo: ");
	scanf("%d", &largo);
	
	int arreglo[largo];
	
	for(int i=0; i<largo; i++){
		printf("Elemento %d: ", i+1);
		scanf("%d", (arreglo+i));
	}
	
	int suma = calcularSuma(arreglo, largo);
	float promedio = calcularPromedio(arreglo, largo);
	
	printf("La suma de este arreglo es: %d \n", suma);
	printf("El promedio del arreglo es: %.2f", promedio);
}
int calcularSuma(int *arr, int largo){
	int acum = 0;
	for (int i=0; i<largo; i++){
		acum+= *(arr + i);
	}
	return acum;
}
float calcularPromedio(int *arr, int largo){
	int acum = calcularSuma(arr, largo);
	return (float)acum/largo;
}