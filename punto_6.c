#include <stdio.h>
#include <string.h>
void ocurrenciaArreglo(int *arr, int largo, int obj);
int main(){
	int largo;
	printf("Ingresa el largo del arreglo: ");
	scanf("%d", &largo);
	
	int arreglo[largo];
	for(int i=0; i<largo; i++){
		printf("Elemento %d: ", i+1);
		scanf("%d", (arreglo+i));
	}
	int buscar;
	printf("Que numero desea buscar? ");
	scanf("%d", &buscar);
	ocurrenciaArreglo(arreglo, largo, buscar);
}
void ocurrenciaArreglo(int *arr, int largo, int obj){
	int cont=0;
	for(int i=0; i<largo; i++){
		if(arr[i]==obj){
			cont++;
		}
	}
	printf("El numero %d aparece %d vez/veces", obj, cont);
}