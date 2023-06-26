void MenuPrimerparcial(){
		printf("\t\t\t\t TEMAS \n");
	printf("\t\t\t\t 1) Tipos de Datos\n");
	printf("\t\t\t\t 2) Entrada y Salida de datos \n");
	printf("\t\t\t\t 3) Operadores matematicos \n");
	printf("\t\t\t\t 4) Funciones \n");
	printf("\t\t\t\t 5) Op Relacionales \n");
	printf("\t\t\t\t 6) Saliendo del Primer Parcial \n");
}
void TiposDatos() {
    int opcion;

    do {
        system("cls"); 
        
        printf("Tipos de datos disponibles:\n");
        printf("1. Enteros\n");
        printf("2. Flotantes\n");
        printf("3. Caracteres\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("\nTipos de datos enteros:\n");
                printf("-------------------------------\n");
                printf("1. int:\n");
                printf("Representa numeros enteros(no soporta decimales).\n");
                printf("Ejemplo:\n\n");
                printf("Se declara una variable entera, con el nombre de edad, la cual se le asiga el valor de 25.\n");
                printf("-int edad = 25;\n\n");
                printf("2. long int(no soporta decimales):\n");
                printf("Representa numeros enteros largos.\n");
                printf("Se declara una variable entera larga, con el nombre de poblacion, la cual se le asigna el valor de 1000000.\n");
                printf("-long int poblacion = 1000000;\n\n");
                break;
            case 2:
                printf("\nTipos de datos flotantes:\n");
                printf("-------------------------------\n");
                printf("1. float:\n");
                printf("Representa numeros de punto flotante de precision simple.\n");
                printf("Ejemplo: float precio = 10.99;\n\n");
                printf("2. double:\n");
                printf("Representa numeros de punto flotante de precision doble.\n");
                printf("Ejemplo: double pi = 3.14159;\n\n");
                break;
            case 3:
                printf("\nTipos de datos de caracteres:\n");
                printf("-------------------------------\n");
                printf("1. char:\n");
                printf("Representa un solo caracter.\n");
                printf("Ejemplo: char inicial = 'A';\n\n");
                break;
            case 4:
                printf("Saliendo del submenu.\n");
                break;
            default:
                printf("Opcion no valida.\n");
                break;
        }

        system("pause");

    } while (opcion != 4);
}
void EntradaSalidaDatos() {
    int opcion;

    do {
        system("cls"); 

        printf("Tema: Entrada y Salida de Datos\n");
        printf("------------------------------------\n");
        printf("1. Funciones de entrada (scanf)\n");
        printf("2. Funciones de salida (printf)\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("\nFunciones de entrada (scanf):\n");
                printf("------------------------------------\n");
                printf("La funcion scanf se utiliza para leer datos desde la entrada estandar.\n");
                printf("Ejemplo: \n");
                printf("int edad;\n");
                printf("printf(\"Ingrese su edad: \");\n");
                printf("scanf(\"%%d\", &edad);\n");
                printf("printf(\"Su edad es: %%d\\n\", edad);\n");
                break;
            case 2:
                printf("\nFunciones de salida (printf):\n");
                printf("------------------------------------\n");
                printf("La funcion printf se utiliza para imprimir datos en la salida estandar.\n");
                printf("Ejemplo: \n");
                printf("int edad = 25;\n");
                printf("printf(\"Mi edad es: %%d\\n\", edad);\n");
                break;
            case 3:
                printf("Saliendo del submenu.\n");
                break;
            default:
                printf("Opcion no valida.\n");
                break;
        }

        printf("\nPresione Enter para continuar...\n");
        system("pause");

    } while (opcion != 3);
}
void OperadoresRelacionales() {
	
   int opcion;
    int a, b;

    do {
        system("cls"); 
       
        printf("Tema: Operadores Relacionales\n");
        printf("------------------------------------\n");
        printf("1. Igual a (==)\n");
        printf("2. Diferente de (!=)\n");
        printf("3. Mayor que (>)\n");
        printf("4. Menor que (<)\n");
        printf("5. Mayor o igual que (>=)\n");
        printf("6. Menor o igual que (<=)\n");
        printf("7. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

       

        switch (opcion) {
            case 1:
                printf("Ingrese el valor de a: ");
                scanf("%d", &a);
                printf("Ingrese el valor de b: ");
                scanf("%d", &b);

                if (a == b) {
                    printf("%d es igual a %d\n", a, b);
                } else {
                    printf("%d no es igual a %d\n", a, b);
                }
                break;

            case 2:
                printf("Ingrese el valor de a: ");
                scanf("%d", &a);
                printf("Ingrese el valor de b: ");
                scanf("%d", &b);

                if (a != b) {
                    printf("%d es diferente de %d\n", a, b);
                } else {
                    printf("%d no es diferente de %d\n", a, b);
                }
                break;

            case 3:
                printf("Ingrese el valor de a: ");
                scanf("%d", &a);
                printf("Ingrese el valor de b: ");
                scanf("%d", &b);

                if (a > b) {
                    printf("%d es mayor que %d\n", a, b);
                } else {
                    printf("%d no es mayor que %d\n", a, b);
                }
                break;

            case 4:
                printf("Ingrese el valor de a: ");
                scanf("%d", &a);
                printf("Ingrese el valor de b: ");
                scanf("%d", &b);

                if (a < b) {
                    printf("%d es menor que %d\n", a, b);
                } else {
                    printf("%d no es menor que %d\n", a, b);
                }
                break;

            case 5:
                printf("Ingrese el valor de a: ");
                scanf("%d", &a);
                printf("Ingrese el valor de b: ");
                scanf("%d", &b);

                if (a >= b) {
                    printf("%d es mayor o igual que %d\n", a, b);
                } else {
                    printf("%d no es mayor o igual que %d\n", a, b);
                }
                break;

            case 6:
                printf("Ingrese el valor de a: ");
                scanf("%d", &a);
                printf("Ingrese el valor de b: ");
                scanf("%d", &b);

                if (a <= b) {
                    printf("%d es menor o igual que %d\n", a, b);
                } else {
                    printf("%d no es menor o igual que %d\n", a, b);
                }
                break;

            case 7:
                printf("Saliendo del submenu\n");
                break;

            default:
                printf("Opcion invalida. Intente nuevamente.\n");
                break;
        }

        system("pause");
    } while (opcion != 7);
}
void Operadores(){
	int opcion;
	int a,b,c;
do{	
	system("cls");
	printf("\t\t\tMENU DE EJEMPLOS\n\n");
	printf("\t1.Suma (+)\n");
	printf("\t2.Resta (-)\n");
	printf("\t3.Multiplicacion (*)\n");
	printf("\t4.Division (/)\n");
	printf("\t5.Porcentaje (%%)\n");
	printf("\t6.Potencia (pow)\n");
	printf("\t7.Raiz (sqrt)\n");
	printf("\t8.Salir del menu\n\n\n");
	printf("\tSeleccione una opcion: "); scanf("%d",&opcion);
	printf("\n\n");
	switch(opcion){
		case 1:
			printf("\t\t\tSuma de dos numeros enteros\n\n");
			
			printf("\tDeme el valor del primer numero:"); scanf("%d",&a);
			printf("\tDeme el valor del segundo numero:"); scanf("%d",&b);
			c=a+b;
			printf("\n\tLa suma de %d + %d = %d\n\n",a,b,c);
			printf("\tEn este caso declaramos cada una de las variables, es decir tenemos el primer numero entero declarado\n");
			printf("\tcomo una variable entera llamada a y en el caso del segundo numero entero le llamamos b, al resultado\n");
			printf("\tlo declaramos como una variable entera con el nombre de c.\n");
			printf("\tPara realizar la suma creamos un algoritmo de la siguiente forma c=a+b, donde a y b son los numeros que\n");
			printf("\tpedimos al usuario y nuesto operador de suma es usado para sumar nuestros dos numeros enteros\n\n");
		break;
	

	}
	system("pause");
	

}while(opcion==8);
}
