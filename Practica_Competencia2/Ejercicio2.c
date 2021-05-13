#include <stdio.h>
#include<stdlib.h>

int main()
{
int arrayInt[5]; //Declaración del array
//inicialización del array
for(int i=0; i < 5; i++){
		arrayInt[i] = i;
	}
	
int *punteroInt; //Declaración del puntero
punteroInt = &arrayInt[0]; //Asignación del array al puntero

int *punteroIntDos; //Declaración del puntero dos
punteroIntDos = &arrayInt[0]; //Asignación del array en la posicion 0 al puntero

printf("Contenido del primer elemento del array: %d \n",arrayInt[0]);

printf("Contenido del primer elemento del punteroInt: %d \n",punteroInt);
printf("Contenido del primer elemento del punteroIntDos: %d \n",punteroIntDos);

printf("Contenido del quinto elemento del array: %d \n",arrayInt[4]);
//Aritmetica de punteros
printf("El valor del quinto elemento de punteroInt es: %i \n", punteroInt += 2);

printf("El valor del quinto elemento de punteroIntDos es: %i \n", punteroIntDos += 2);
//ciclos
for(int i=0; i < 5; i++){
		punteroInt++;
		printf("punteroInt en posicion %d valor: %d \n", i, punteroInt);
	}

	for(int j=0; j < 5; j++){
		punteroIntDos += j;
		printf("punteroInt en posicion %d valor: %d \n", j, punteroIntDos);
	}

return 0;
}