#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

	int numProcesos;
	
	printf("\nIngrese un numero de procesos: ");
	scanf("%d", &numProcesos);
	
	int procesoID[numProcesos], numTareas[numProcesos], prioridad[numProcesos];
	int i;
	bool tareasPen;
	
	//Asigna: id, tareas y prioridad (aleatoriamente)
	for(i=0; i<numProcesos; i++){
		procesoID[i] = i+1;
		numTareas[i] = rand() % 20 + 2; //rango de 0 a 20
		prioridad[i] = rand() % 2; //0 o 1
	}
	//imprime informacion de cada proceso
	for(i=0; i<numProcesos; i++){
		printf("\nID de proceso: %d, con %d tareas y una prioridad de %d", procesoID[i], numTareas[i], prioridad[i]);
	}

	//Revisar si hay procesos con tareas pendientes
	for(i=0; i<numProcesos; i++){
		if(numTareas[i]> 0){
			tareasPen = true;
		}
		else{
			printf("\nNo hay procesos con tareas pendientes");
			tareasPen = false;
		}
	}
	
	//Ejecutando tareas
	printf("\n-----------------------------------------------------------");
	printf("\nEjecucion de tareas");
	do{
		tareasPen = false;
		
		//Cantidad de tareas restantes de cada proceso.
		for(i=0; i<numProcesos; i++){
			if(numTareas[i] > 0){
				printf("\nProceso [%d], con [%d] tareas restantes.", procesoID[i], numTareas[i]);
				tareasPen = true;
			}

			//Prioridad 0 ejecutarán 6 tareas, prioridad 1 ejecutarán 3.
			if(prioridad[i] == 0){
				numTareas[i] = numTareas[i]- 6;
			}
			if(prioridad[i] == 1){
				numTareas[i] = numTareas[i] - 3;
			}
		}
	}while(tareasPen);

	printf("\n");
	
	//Revisa si los procesos han terminado
	for(i=0; i<numProcesos; i++){
		if(prioridad[i] == 0){
			if(numTareas[i] <= 0){
				printf("\nProceso [%d] terminado!", procesoID[i] );
			}
		}	
		if(prioridad[i] == 1){
			if(numTareas[i]<= 0){
				printf("\nProceso [%d] terminado!", procesoID[i] );
			}
		}
	}
	printf("\n-----------------------------------------------------------");
	printf("\nTodos los procesos han sido ejecutados correctamente.\n");
	printf("\n");
	return 0;
}
