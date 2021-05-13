#include <stdio.h>
#include<stdlib.h>

int main()
{
int arrayInt[5]; //Declaración del array
//inicialización del array
arrayInt[0]=0;
arrayInt[1]=1;
arrayInt[2]=2;
arrayInt[3]=3;
arrayInt[4]=4;
int *punteroInt; //Declaración del puntero
punteroInt = &arrayInt[0]; //Asignación del array al puntero

int *punteroIntDos; //Declaración del puntero dos
punteroIntDos = &arrayInt[0]; //Asignación del array en la posicion 0 al puntero

printf("Contenido del primer elemento del array: %d \n",arrayInt[0]);

printf("Contenido del primer elemento del punteroInt: %d \n",punteroInt);
printf("Contenido del primer elemento del punteroIntDos: %d \n",punteroIntDos);

printf("Contenido del quinto elemento del array: %d \n",arrayInt[4]);

return 0;
}