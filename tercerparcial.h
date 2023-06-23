#pragma once

#define FILAS 3
#define COLUMNAS 3

void Menuarreglo1(void) {
	printf("\t\t\t\t MENU ARREGLOS \n");
	printf("\t\t\t\t 1) ARREGLO DE UNA DIMENSION \n");
	printf("\t\t\t\t 2) ARREGLO DE DOS DIMENSIONES \n");
	printf("\t\t\t\t 3) REGRESAR \n");
}
void MenuArreglos2d(void) {
	printf("\t\t\t\t ARREGLOS UNA DIMENSION \n");
	printf("\t\t\t\t 1) VECTORES \n");
	printf("\t\t\t\t 2) EJEMPLO MATRICES \n");
	printf("\t\t\t\t 3) REGRESAR \n");
}
void MenuOp1(void) {
	printf("MENU DE VECTORES:  \n");
	printf("***************************** \n");
	printf("1) LECTURA DE UN VECTOR \n");
	printf("2) VISUALIZAR AL VECTOR \n");
	printf("3) BUSCAR UN DATO EN EL VECTOR \n");
	printf("4) MODIFICA UN DATO DEL VECTOR \n");
	printf("5) SALIDA DEL MENU DE VECTORES \n");
}
void LeeVec(float Vector1[10]) {
	int i;  //declaracion de a variable i

	for (i = 0; i < 10; i++) { //inicio del bucle for con i con un valor inicial, pero i tiene que ser menor que 10 y a la variable i se le incrementara de 1 en 1
		printf("Vector1[%f] = ");
		scanf("%f", &Vector1[i]); //nos solicita el valor del vector 1
	}
}
void VerVector(float Vector1[10]) {
	int i;
	for (i = 0; i < 10; i++) { //inicio del bucle for con i con un valor inicial, pero i tiene que ser menor que 10 y a la variable i se le incrementara de 1 en 1
		printf("Vector[%d] = %f \n", i, Vector1[i]); //impresion en pantalla de i y el vector 1
	}

}
void LeerMatriz(int matriz[FILAS][COLUMNAS]) {
	int i, j;
	for (i = 0; i < FILAS; i++) {
		for (j = 0; j < COLUMNAS; j++) {
			printf("Ingrese los siguientes %d x %d \n",i,j); scanf("%d",&matriz[i][j]);
		}
	}
}

void MostrarMatriz(int matriz[FILAS][COLUMNAS]) {
	int i, j;

	for (i = 0; i < FILAS; i++) {
		for (j = 0; j < COLUMNAS; j++) {
			printf("\t %d \t", matriz[i][j]);
		}printf("\n");
	}
}