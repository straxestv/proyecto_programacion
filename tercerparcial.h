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
void mostrarMatriz(int matriz[FILAS][COLUMNAS]) {
	for (int i = 0; i < FILAS; i++) { //incio del bucle for, i tiene un valor inicial de 0, esta tiene que ser menor que el numero de filas previamente definidos en la macro
		for (int j = 0; j < COLUMNAS; j++) { //bucle for anidado que contiene a j con valor inicial de 0 y j es menor que el numero de columnas que ya se ha definido
			printf("%d ", matriz[i][j]); //muestra en pantalla la matriz
		}
		printf("\n"); //salto de linea
	}
}