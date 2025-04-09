#include <stdio.h>
#include <string.h>
void concatenarCadenas(char *arr1, char *arr2);

int main(){
	char cadena1[1000], cadena2[500];
	printf("Ingrese la primer cadena: ");
	fgets(cadena1, sizeof(cadena1), stdin);
	
	printf("Ingrese la segunda cadena: ");
	fgets(cadena2, sizeof(cadena2), stdin);
	
	concatenarCadenas(cadena1, cadena2);
}
void concatenarCadenas(char *arr1, char *arr2){
	char *inicio=arr1;
	while (*arr1 != '\0') {
	   if (*arr1 == '\n') {
		   *arr1 = '\0';
		   break;
	   }
	   arr1++;
	   }
	   
   strcat(inicio, arr2);
   printf("La cadena concatenada resulta siendo: %s", inicio);
}