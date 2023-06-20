#include<stdlib.h>
#include<stdio.h>
#include<math.h>


void MenuPrin(void);
void TituloPortada(int ancho, int alto, char texto[]);

//DECLARACION DE MACROS
#define FILAS 3
#define COLUMNAS 3

//DECLARIACION DE VARIABLES
void Menuarreglo1(void);
void MenuArreglos2d(void);
void LeeVec(float Vector1[10]);
void VerVector(float Vector1[10]);
void MenuOp1(void);
void mostrarMatriz(int matriz[FILAS][COLUMNAS]);

int main() {
	int anchoMarco = 45;
	int altoMarco = 6;
	char texto[] = "        MENU PROYECTO FINAL";
	int opcion, opcion1, opcion2;//declaracion de las variables tipo entero que almacenan el dato correspondiente a la opcion
    //DECLARACION DE VARIABLES
    float Vector1[10]; //arreglo de tipo flotante con 10 espacios
    int ACTIVAR, buscarvec, modif_vec, valor2_vec; //variables que se usan en el menu de vectores
    int matriz[FILAS][COLUMNAS] = { //arreglo de 2 dimensiones que contiene una matriz de 3x3 
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

	do {
		system("pause"); system("cls");

        TituloPortada(anchoMarco, altoMarco, texto);

		MenuPrin();
		printf("Seleccione una opcion: "); scanf("%d", &opcion);

        switch (opcion) {

        case 1:
            break;

        case 2:
            break;

        case 3:
			do {
				system("pause"); system("cls"); //pausa del programa y limpieza de pantalla cada vez que se termine cada caso.

				Menuarreglo1();  //menu arreglos

				printf("\n Selecione la opcion: "); scanf("%d", &opcion1);  //lectura de datos que se almacenaran en la variable opcion1

				//INICIO DEL MENU PRINCIPAL

				switch (opcion1) {

				case 1:

					printf("TEMA: ARREGLOS DE UNA DIMENSION \n");
					printf("PROGRAMA: Diseño de un programa ESTRUCTURADO que contiene un menu de 4 opciones. \n\n");

					do {
						system("cls");
						MenuOp1();  //ejecucion del menu

						printf("Digite la opcion: "); scanf("%d", &opcion2);

						switch (opcion2) {  //sentencia switch
						case 1:
							printf("\n");
							printf("********************\n");
							LeeVec(Vector1); //lectura de los vectores
							ACTIVAR = 1; //se le da un valor de 1 a la variable ACTIVAR 
							break;

						case 2:
							printf("\n");
							printf("********************\n");
							if (ACTIVAR == 1) { //condicional if que nos dice que si ACTIVAR es igual a 1 se ejecuta VerVector
								VerVector(Vector1);
							}
							break;

						case 3:
							if (ACTIVAR == 1) {
								printf("INGRESE EL VECTOR QUE QUIERE BUSCAR: "); scanf("%d", &buscarvec); //lectura de dato del vector que se quiere buscar
								if (buscarvec <= 10) {
									printf("************************************************ \n");
									printf(" \n El vector tiene un valor de: %f \n", Vector1[buscarvec]); // muestra en pantalla el vector que se digito.
								}
								else { printf("No hay mas de 10 vectores!"); } //else en caso de que el usuario intente buscar mas de 10 vectores
							}
							break;

						case 4:
							if (ACTIVAR == 1) {
								printf("INGRESE EL VECTOR QUE SE MODIFICARA:  "); scanf("%d", &modif_vec); // se nos solicita el vector que queremos modificar

								if (modif_vec <= 10) { //condicional para que el usuario no digite mas de a10 vectores
									printf("Ingrese el nuevo valor del vector: "); scanf("%f", &Vector1[modif_vec]); //nos muestra el vector que elegimos y nos solicita que le asignemos un nuevo valor
									printf(" \n El nuevo valor del vector es: %f \n", Vector1[modif_vec]); //nos muestra el nuevo valor del vector
								}
							}
							break;

						case 5:
							printf("Salida"); //salida del menu de vectores
							break;

						default: printf("Opcion incorrecta"); //mensaje en caso de presionar una opcion que no este en el menu
						}
						system("pause");

					} while (opcion2 != 5); //condicional para mantener los datos del menu a menos que sea presionada la opcion de salida

					break;
				case 2:
					printf("TEMA: ARREGLOS DE DOS DIMENSIONES \n");
					printf("PROGRAMA: Diseño de un programa ESTRUCTURADO un ejemplo de una matriz utilizando arrelgos bidimensionales. \n\n");
					mostrarMatriz(matriz); //se muestra la matriz de ejemplo llamando a la funcion
					break;
				case 3:
					printf("Saliendo del menu \n"); //salida del menu principal
					break;

				default: printf("OPCION INCORRECTA!!! \n");

				}


			} while (opcion1 != 3); //FIN DEL CICLO WHILE 
            break;

        case 4:
            break;

        default: printf("OPCION INCORECTA XD");

        }



	} while (opcion != 4);



	return 0;
}

/////////////////////////////////////////////DESARROLLO DE FUNCIONES//////////////////////////////////////////////////////

void TituloPortada(int ancho, int alto, char texto[]) {
    int i, j;
    int margen = 2;
    int textoLongitud = ancho - 2 * margen;

    // Imprimir la parte superior del marco
    for (i = 0; i < ancho; i++) {
        printf("-");
    }
    printf("\n");

    // Imprimir el contenido del marco
    for (i = 0; i < alto; i++) {
        if (i == (alto - 1) / 2) {
            // Imprimir el texto centrado en la línea del medio
            printf("|");
            for (j = 0; j < margen; j++) {
                printf(" ");
            }
            printf("%-*s", textoLongitud, texto);
            for (j = 0; j < margen; j++) {
                printf(" ");
            }
            printf("|\n");
        }
        else {
            // Imprimir líneas verticales con espacios en blanco
            printf("|");
            for (j = 0; j < ancho - 2; j++) {
                printf(" ");
            }
            printf("|\n");
        }
    }

    // Imprimir la parte inferior del marco
    for (i = 0; i < ancho; i++) {
        printf("-");
    }
    printf("\n");
}

//MENU PRINCIPAL DE OPCIONES

void MenuPrin(void) {
	printf("==================================================== \n");
	printf("\t\t PARCIALES \n");
	printf("\t\t 1) PARCIAL 1 \n");
	printf("\t\t 2) PARCIAL 2 \n");
	printf("\t\t 3) PARCIAL 3 \n");
	printf("\t\t 4) SALIR DEL MENU \n");

}


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

