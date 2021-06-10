#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define TAM_NOMBRE 100
					
int existe_archivo(char *nombre_arch);
int crear_archivo(char *nombre_arch);
void cerrar_archivo(FILE *ptrArchivo, char *nombre_arch);

int existe_archivo2(char *nombre_arch2);
int crear_archivo2(char *nombre_arch2);
void cerrar_archivo2(FILE *ptrArchivo2, char *nombre_arch2);

int main(int argc, char const *argv[]){		
	// FILE es una estructura
	int existe_arch = 0;
	char nombre_arch[TAM_NOMBRE];	
	strcpy(nombre_arch, argv[1]);
	char nombre_arch2[TAM_NOMBRE];
	strcpy(nombre_arch2, argv[2]);		

	printf("\n Archivo de entrada"); 
	do{
		existe_arch = existe_archivo(nombre_arch);
		if(existe_arch){
			printf("\tEl archivo: %s, YA EXISTE.\n", nombre_arch);
		}
		else{
			printf("\tEl archivo: %s, NO EXISTE.\n", nombre_arch);
			if(crear_archivo(nombre_arch)){
				printf("\tEl archivo: %s, Fue CREADO.\n", nombre_arch);
			}
			else{
				printf("\tEl archivo:%s, NO se pudo crear.\n", nombre_arch);
			}
		}
	}while(existe_arch==0);	



//archivo 2
	printf("\n Archivo de salida"); 
	do{
		existe_arch = existe_archivo2(nombre_arch2);
		if(existe_arch){
			printf("\tEl archivo: %s, YA EXISTE.\n", nombre_arch2); 
		}
		else{
			printf("\tEl archivo: %s, NO EXISTE.\n", nombre_arch2);
			if(crear_archivo2(nombre_arch2)){
				printf("\tEl archivo: %s, Fue CREADO.\n", nombre_arch2);
			}
			else{
				printf("\tEl archivo: %s,NO se pudo crear.\n", nombre_arch2);
			}
		}
	}while(existe_arch==0);
}

//control archivo1
int existe_archivo(char *nombre_arch){
	FILE *ptrArchivo;
	int existe = 0;
	ptrArchivo = fopen(nombre_arch, "r");
	if( ptrArchivo != NULL ){
		existe = 1;
		//cerrar_archivo(ptrArchivo, nombre_arch);
	}	
	return existe;
}

int crear_archivo(char *nombre_arch){
	int creado = 0;
	FILE *ptrArchivo;
	ptrArchivo = fopen(nombre_arch, "w");
	if( ptrArchivo == NULL ){
		printf("El archivo: %s, No pudo crearse (uso de w).\n", nombre_arch);
	}	
	else{
		creado = 1;
		printf("Archivo: %s, Creado (uso de w).\n", nombre_arch);
	}
	return creado;
}

void cerrar_archivo(FILE *ptrArchivo, char *nombre_arch){
	fclose(ptrArchivo);
	printf("Archivo: %s, Cerrado Correctamente.\n", nombre_arch);
}

//control archivo2
int existe_archivo2(char *nombre_arch2){
	FILE *ptrArchivo2;
	int existe = 0;
	ptrArchivo2 = fopen(nombre_arch2, "r");
	if( ptrArchivo2 != NULL ){
		existe = 1;
		//cerrar_archivo2(ptrArchivo2, nombre_arch2);
	}	
	return existe;
}

int crear_archivo2(char *nombre_arch2){
	int creado = 0;
	FILE *ptrArchivo2;
	ptrArchivo2 = fopen(nombre_arch2, "w");
	if( ptrArchivo2 == NULL ){
		printf("El archivo: %s, no pudo crearse (uso de w).\n", nombre_arch2);
	}	
	else{
		creado = 1;
		printf("Archivo: %s, Creado (uso de w).\n", nombre_arch2);
	}
	return creado;
}

void cerrar_archivo2(FILE *ptrArchivo2, char *nombre_arch2){
	fclose(ptrArchivo2);
	printf("Archivo: %s, Cerrado Correctamente.\n", nombre_arch2);
}
