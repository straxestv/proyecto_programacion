
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<windows.h>
#include <conio.h>
#include "Menus.h"
#include "Menu1erparcial.h"
#include "SegundoParcial.h"
#include "tercerparcial.h"



int main() {	
system("mode con: cols=160 lines=40");
	int anchoMarco = 45;
	int altoMarco = 6;
	char texto[] = "         MENU PROYECTO FINAL";
	int opcion, opcion1, opcion2, opcion3, opcion2p, opcion2p2, opcion2p3;//declaracion de las variables tipo entero que almacenan el dato correspondiente a la opcion
    //DECLARACION DE VARIABLES
    float Vector1[10]; //arreglo de tipo flotante con 10 espacios
    int ACTIVAR, buscarvec, modif_vec, valor2_vec; //variables que se usan en el menu de vectores
	int matriz[FILAS][COLUMNAS]; //arreglo de 2 dimensiones que contiene una matriz

	do {
		system("pause"); system("cls");

        TituloPortada(anchoMarco, altoMarco, texto);

		MenuPrin();
		printf("\n\nSeleccione una opcion: "); scanf("%d", &opcion);

        switch (opcion) {

        case 1:
		 do {
				system("pause"); system("cls"); //pausa del programa y limpieza de pantalla cada vez que se termine cada caso.
		 MenuPrimerparcial();  //menu primer parcial

				printf("\n Selecione la opcion: "); scanf("%d", &opcion2);
					switch (opcion2) {
						case 1: 		TiposDatos();
							break;
		  			  case 2: 			EntradaSalidaDatos();
		    				break;
		   			 case 3: 			operadores(); 
		    			    break;
		   			 case 4:			Funciones();
		    				break;
		    			case 5:			OperadoresRelacionales(); 
		   			     break;
		   			 case 6:printf("Saliendo del Primer Parcial\n");
           			     break;
						default:printf("Opcion inexistente\n");
					}
					}while (opcion2 != 6);
           			 break;

        case 2:
			do{	
				system("pause"); system("cls"); //pausa del programa y limpieza de pantalla cada vez que se termine cada caso.
				
        		Menuparcial2();	//Menu del parcial 2
        		
        		printf("\n\t\t\t\t Selecione la opcion: "); scanf("%d", &opcion2p);  //lectura de datos que se almacenaran en la variable opcion
        		
        		switch (opcion2p) {
						case 1: 
								MenuIfElse();
								
							break;
				
						case 2: 
								MenuSwitch();
							break;
						
						case 3: 
								MenuCiclos();
							break;
							
						case 4: 
								printf("\n\t\t\t\tRegresando al Menu Principal :)\n");
							break;
							
						default:
								printf("\n\t\t\t\tOpcion Incorrecta");           

						
				} 
			}while (opcion2p!=4);
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
					printf("PROGRAMA: Dise√±o de un programa ESTRUCTURADO que contiene un menu de 4 opciones. \n\n");

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
					printf("PROGRAMA: DiseÒo de un programa ESTRUCTURADO que muestre la matriz digitada por un usuario. \n\n");
					
					
					do{
						
						system("pause"); system("cls");
						MenuMatriz();
						
						printf("Ingrese la opcion: "); scanf("%d",&opcion3);
						
						switch(opcion3){
							
							case 1:
								LeerMatriz(matriz); 
								break;
							case 2:
								MostrarMatriz(matriz);
							    break;
							case 3:
								printf("Regresando....");
								break;
										
							default: printf("OPCION INCORRECTA!! ");
							
						}
						
						
					}while(opcion3 != 3);
					
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



	} while(opcion != 4);



	return 0;
}







