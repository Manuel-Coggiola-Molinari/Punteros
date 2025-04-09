#include <stdio.h>
void copiarArreglo(int *origen, int *destino, int largo);
void mostrarArreglo(int *arr, int largo);

int main(){
	int largo;
	printf("Ingresa el largo del arreglo: ");
	scanf("%d", &largo);
	
	int arregloOriginal[largo];
	int arregloCopia[largo];
	
	for(int i=0; i<largo; i++){
		printf("Elemento %d: ", i+1);
		scanf("%d", (arregloOriginal+i));
	}
	
	copiarArreglo(arregloOriginal, arregloCopia, largo);
	
	printf("Arreglo original: ");
	mostrarArreglo(arregloOriginal, largo);
	
	printf("Arreglo copiado: ");
	mostrarArreglo(arregloCopia, largo);
}

void copiarArreglo(int *origen, int *destino, int largo){
	for(int i=0; i<largo; i++){
		*(destino+i) = *(origen+i);
	}
}
void mostrarArreglo(int *arr, int largo){
	for(int i=0; i<largo; i++){
		printf("%d ", *(arr+i));
	}
	printf("\n");
}