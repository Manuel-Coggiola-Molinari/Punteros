#include <stdio.h>
int seleccionarMayor(int *arr, int largo){
	int mayor = *arr;
	for(int i=1; i<largo; i++){
		if(*(arr+i) > mayor){
			mayor=*(arr+i);
		}
	}
	return mayor;
}

int seleccionarMenor(int *arr, int largo){
	int menor = *arr;
	for(int i=1; i<largo; i++){
		if(*(arr+i) < menor){
			menor=*(arr+i);
		}
	}
	return menor;
}
int main(){
	int largo;
	printf("Ingresa el largo del arreglo: ");
	scanf("%d", &largo);
	
	int arreglo[largo];
	
	for(int i=0; i<largo; i++){
		printf("Elemento %d: ", i+1);
		scanf("%d", (arreglo+i));
	}
	int mayor = seleccionarMayor(arreglo, largo);
	int menor = seleccionarMenor(arreglo, largo);
	printf("El mayor numero del arreglo es: %d \n", mayor);
	printf("El menor numero del arreglo es: %d", menor);
}