#pragma once

#define FILAS 3
#define COLUMNAS 3
#define TAM 50
#define TamMed 3
#define Tsem 5

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
	printf("\t\t\t\t 3) TABLA MEDICAMENTOS \n");
	printf("\t\t\t\t 4) REGRESAR \n");
}
void MenuOp1(void) {
	printf("\t\t\t\tMENU DE VECTORES: \n\n");

	printf("\t\t\t\t***************************** \n");
	printf("\t\t\t\t 1) LECTURA DE UN VECTOR \n");
	printf("\t\t\t\t 2) VISUALIZAR AL VECTOR \n");
	printf("\t\t\t\t 3) BUSCAR UN DATO EN EL VECTOR \n");
	printf("\t\t\t\t 4) MODIFICA UN DATO DEL VECTOR \n");
	printf("\t\t\t\t 5) SALIDA DEL MENU DE VECTORES \n");
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

void MenuMatriz(void){
	printf("\t\t\t\t ARREGLOS BIDIMENSIONALES \n");
	
	printf("\t\t\t\t 1) INGRESA LA MATRIZ \n");
	printf("\t\t\t\t 2) MOSTRAR MATRIZ \n");
    printf("\t\t\t\t 3) TABLA MEDICAMENTOS \n");
	printf("\t\t\t\t 4) REGRESAR \n");

	
	
}

//////////////////////////////////////// matrices///////////////////////////////////////////////////

void LeerMatriz(int matriz[FILAS][COLUMNAS]) {
	int i, j;
	for (i = 0; i < FILAS; i++) {
		for (j = 0; j < COLUMNAS; j++) {
			printf("\t\t\t\t Ingrese el dato: (%d , %d)\n",i,j); scanf("%d",&matriz[i][j]);
		}
	}
}

void MostrarMatriz(int matriz[FILAS][COLUMNAS]) {
	int i, j;

	for (i = 0; i < FILAS; i++) {
		for (j = 0; j < COLUMNAS; j++) {
			printf("\t\t\t\t %d \t", matriz[i][j]);
		}printf("\n");
	}
}

///////////////////////////// tabla medicamentos//////////////////////////////////////

void CALCPROD(int MEDIC[TamMed][Tsem], int SMedic[TamMed],  int SPsem[Tsem]){
	int i,j, x,y;
	x = 77; y=7;
	for(i=0;i<TamMed;i++){ // trabaja las filas(medic)
	    SPsem[i]=0;    
		for(j=0;j<Tsem;j++){  // trabaja las columnas(semana)
            SPsem[i] = SPsem[i] + MEDIC[i][j];       
        }  
		gotoxy(x,y);printf("%d",SPsem[i]);
		y = y + 2;
    }
    
    x = 20; y=15;
    for(j=0;j<Tsem;j++){  
        SMedic[j]=0;
        for(i=0;i<TamMed;i++){
        SMedic[j] = SMedic[j] + MEDIC[i][j];
        }
        gotoxy(x,y);  printf("%d",SMedic[j]);
        x = x + 12;
    }
}
void FTITULOS(int x, int y, char SEMANA[Tsem][TAM], char MEDICAMENTOS[TamMed][TAM])
{ int i;
	for(i=0;i<Tsem;i++){
		gotoxy(x,y); printf("%s",SEMANA[i]);
		x = x + 12;
	}
	x = 1;  y = 7;
	for(i=0;i<TamMed;i++){
		gotoxy(x,y); printf("%s",MEDICAMENTOS[i]);
		y = y + 2;
	}
}
void LEEMEDIC(int x, int y, int MEDIC[TamMed][Tsem]){
	int i,j;
	for(i=0;i<TamMed;i++){ // trabaja las filas(medic)
	    x=20;
		for(j=0;j<Tsem;j++){  // trabaja las columnas(semana)
    gotoxy(x,y); scanf("%d",&MEDIC[i][j]);
    x = x + 12;
		}
		y = y + 2;
	}
}

	    


