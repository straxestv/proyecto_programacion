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
                printf("-------------------------------\n\n");
                printf("1. int:\n");
                printf("Representa numeros enteros(no soporta decimales).\n");
                printf("Ejemplo:\n\n");
                printf("\tSe declara una variable entera, con el nombre de edad, la cual se le asiga el valor de 25.\n");
                printf("\t-int edad = 25;\n\n");
                printf("2. long int(no soporta decimales):\n");
                printf("Representa numeros enteros largos.\n");
                printf("Ejemplo:\n\n");
                printf("\tSe declara una variable entera larga, con el nombre de poblacion, la cual se le asigna el valor de 1000000.\n");
                printf("\t-long int poblacion = 1000000;\n\n");
                break;
            case 2:
                printf("\nTipos de datos flotantes:\n");
                printf("-------------------------------\n\n");
                printf("1. float:\n");
                printf("Representa numeros de punto flotante de precision simple.\n");
                printf("Ejemplo: float precio = 10.99;\n\n");
                printf("2. double:\n");
                printf("Representa numeros de punto flotante de precision doble.\n");
                printf("Ejemplo: double pi = 3.14159;\n\n");
                break;
            case 3:
                printf("\nTipos de datos de caracteres:\n");
                printf("-------------------------------\n\n");
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
                printf("Ejemplo: \n\n");
                printf("\tSe declara una variable entera con el nombre edad:\n");
                printf("\t\t-int edad;\n\n");
                printf("\tSe le solicitara al usuario que ingrese su edad:\n ");
                printf("\t\t-printf(\"Ingrese su edad: \");\n\n");
                printf("\tMediante la funcion scanf, se lee el dato, asignandoselo a la variable edad:\n");
                printf("\t\tscanf(\"%%d\", &edad);\n\n");
                printf("\tSe despliega el dato antes obtenido, utilizando la variable entera edad:\n");
                printf("\t\tprintf(\"Su edad es: %%d\\n\", edad);\n");
                break;
            case 2:
                printf("\nFunciones de salida (printf):\n");
                printf("------------------------------------\n");
                printf("La funcion printf se utiliza para imprimir datos en la salida estandar.\n");
                printf("Ejemplo: \n\n");
                printf("\tSe declara una variable entera con el nombre de edad, la cual se le asigna el valor de 25");
                printf("\t\tint edad = 25;\n");
                printf("\tSe imprime los datos mediante la funcion printf,usando la varaible edad ");
                printf("\t\tprintf(\"Mi edad es: %%d\\n\", edad);\n");
                break;
            case 3:
                printf("Saliendo del submenu.\n");
                break;
            default:
                printf("Opcion no valida.\n");
                break;
        }
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
void operadores(void){
	int opcion;
	int a,b,c;
	float d,e,f;
	float V,h,r;
	float A,B,C,Disc;
do{	
	system("cls");
	printf("\n\t\t\tMENU DE EJEMPLOS\n\n");
	printf("\t1.Suma (+)\n");
	printf("\t2.Resta (-)\n");
	printf("\t3.Multiplicacion (*)\n");
	printf("\t4.Division (/)\n");
	printf("\t5.Potencia (pow)\n");
	printf("\t6.Raiz (sqrt)\n");
	printf("\t7.Salir del menu\n\n\n");
	printf("\tSeleccione una opcion: "); scanf("%d",&opcion);
	printf("\n\n");
	switch(opcion){
		case 1:
			printf("\t\t\t\t\tSuma de dos numeros enteros\n\n");
			
			printf("\tDeme el valor del primer numero:"); scanf("%d",&a);
			printf("\tDeme el valor del segundo numero:"); scanf("%d",&b);
			printf("\n\n");
			c=a+b;
			printf("\n\tLa suma de %d + %d = %d\n\n",a,b,c);
			printf("\tEn este caso declaramos cada una de las variables, es decir tenemos el primer numero entero declarado\n");
			printf("\tcomo una variable entera llamada a y en el caso del segundo numero entero le llamamos b, al resultado\n");
			printf("\tlo declaramos como una variable entera con el nombre de c.\n");
			printf("\tPara realizar la suma creamos un algoritmo de la siguiente forma c=a+b, donde a y b son los numeros que\n");
			printf("\tpedimos al usuario y nuesto operador de suma es usado para sumar nuestros dos numeros enteros\n\n");
		break;
		case 2: 
			printf("\t\t\t\t\tResta de dos numeros enteros\n\n");
			
			printf("\tDeme el valor del primer numero:"); scanf("%d",&a);
			printf("\tDeme el valor del segundo numero:"); scanf("%d",&b);
			printf("\n\n");
			c=a-b;
			printf("\n\tLa suma de %d - %d = %d\n\n",a,b,c);
			printf("\tEn este caso declaramos cada una de las variables, es decir tenemos el primer numero entero declarado\n");
			printf("\tcomo una variable entera llamada a y en el caso del segundo numero entero le llamamos b, al resultado\n");
			printf("\tlo declaramos como una variable entera con el nombre de c.\n");
			printf("\tPara realizar la resta creamos un algoritmo de la siguiente forma c=a-b, donde a y b son los numeros que\n");
			printf("\tpedimos al usuario y nuesto operador de resta es usado para multiplicar nuestros dos numeros enteros\n\n");
			printf("\n\n");
		break;
		case 3:
			printf("\t\t\t\t\tMultiplicacion de dos numeros enteros\n\n");
			
			printf("\tDeme el valor del primer numero:"); scanf("%d",&a);
			printf("\tDeme el valor del segundo numero:"); scanf("%d",&b);
			printf("\n\n");
			c=a*b;
			printf("\n\tLa suma de %d * %d = %d\n\n",a,b,c);
			printf("\tEn este caso declaramos cada una de las variables, es decir tenemos el primer numero entero declarado\n");
			printf("\tcomo una variable entera llamada a y en el caso del segundo numero entero le llamamos b, al resultado\n");
			printf("\tlo declaramos como una variable entera con el nombre de c.\n");
			printf("\tPara realizar la multiplicacion creamos un algoritmo de la siguiente forma c=a*b, donde a y b son los numeros que\n");
			printf("\tpedimos al usuario y nuesto operador de multiplicacion es usado para multiplicar nuestros dos numeros enteros\n\n");
			printf("\n\n");
		break;
		case 4:
			printf("\t\t\t\t\tDivision de dos numeros\n\n");
			
			printf("\tDeme el valor del primer numero:"); scanf("%f",&d);
			printf("\tDeme el valor del segundo numero:"); scanf("%f",&e);
			printf("\n\n");
			if(e!=0){
			f=d/e;
			printf("\n\tLa suma de %5.2f / %5.2f = %f\n\n",d,e,f);
			printf("\tEn este caso declaramos cada una de las variables, es decir tenemos el primer numero entero declarado\n");
			printf("\tcomo una variable entera llamada d y en el caso del segundo numero entero le llamamos e, al resultado\n");
			printf("\tlo declaramos como una variable entera con el nombre de f. Teniemdo en cuenta que como se trata de una division\n");
			printf("\ty en este caso nuestras variables seran de tipo flotante.\n");
			printf("\tPara realizar la division creamos un algoritmo de la siguiente forma c=a/b, donde a y b son los numeros que\n");
			printf("\tpedimos al usuario y nuesto operador de division es usado para dividir nuestros dos numeros enteros\n\n");
			printf("\n\n");
			}
			else{
			
				printf("\tEn este caso declaramos cada una de las variables, es decir tenemos el primer numero entero declarado\n");
				printf("\tcomo una variable entera llamada d y en el caso del segundo numero entero le llamamos e, al resultado\n");
				printf("\tlo declaramos como una variable entera con el nombre de f. Teniemdo en cuenta que como se trata de una division\n");
				printf("\ty en este caso nuestras variables seran de tipo flotante.\n");
				printf("\tPara realizar la division creamos un algoritmo de la siguiente forma c=a/b, donde a y b son los numeros que\n");
				printf("\tpedimos al usuario y nuesto operador de division es usado para dividir nuestros dos numeros enteros\n\n");
				printf("\tpero en este caso en especifico la division no puede efectuarse porque el denominador es igual a 0\n");
				printf("\n\n");}	
			break;
			case 5:
			printf("\t\t\t\t\tPotencia de numeros\n\n");
			
			printf("\tPara ejemplificar el uso de este operador matematico proponemos un peque�o programa que calcula el area de un cono.\n");
			printf("\t\t\t\t\t Area de un cono:\n");
			printf("\n\n");
			printf("\tProporcionar la altura del cono: ");
	        scanf("%f",& h);
	        printf("\tProporcionar el radio del cono: ");
	        scanf("%f",& r);
	        printf("\n\n");
	        V= (1.0/3.0)*(M_PI*pow(r,2)*h);
	        printf("\tVolumen = (1.0/3.0)*(M_PI*pow(%5.2f,2)*%5.2f) = %5.2f\n",r,h,V);
	        printf("\tEn este caso declaramos nuestras variables basandonos en la formula para calcular el volumen del cono y solo declaramos las\n");
			printf("\tque debemos leer las cuales seran la altura que la declaramos con la variable h y el radio declarado con la variable r,\n"); 
			printf("\tnuestro resultado es declarado como V el cual no se lee, en este ejemplo utilizamos nuestro operador en la formula:\n");
			printf("\tV = (1.0/3.0)*(M_PI*pow(r,2)*h)\n");
			printf("\tDonde V es el volumen resultante de el calculo, (1.0/3.0) es una constante derivada de la formula del volumen del cono, M_PI es\n");
			printf("\tel valor de PI dado por la libreria math.h, pow(r,2) es el uso de nuestro operador de potencia que se expresa poniendo la palabra\n");
			printf("\tpow seguido de un parentesis con la variable y la potencia a la cual la vamos a elevar separado por una coma de la forma (n,m)\n");
			printf("\tdonde n es la variable o numero a elevar y m es la constante a la cual vamos a elevar a nuestra variable o numero n.\n\n");
			break;
			case 6:
			printf("\t\t\t\t\tRaiz de numeros\n\n");
			printf("\tPara ejemplificar el uso de este operador matematico proponemos un peque�o programa que calcula el discriminante de la formula general.\n");
			printf("\t\t\t\t\t Discriminante de la formula general:\n");
			printf("\n\n");
			printf("\tDeme el valor de a:"); scanf("%f",&A);
			printf("\tDeme el valor de b:"); scanf("%f",&B);
			printf("\tDeme el valor de c:"); scanf("%f",&C);
			printf("\n\n");
			Disc=sqrt(pow(B,2)-(4.0*A*C));
			printf("\n\n");
			printf("\tEl valor del discriminante es igual a sqrt(pow(%5.2f,2)-4.0*%5.2f*%5.2f) = %5.2f \n",B,A,C,Disc);
			printf("\n\n");
			printf("\tEn este caso declaramos nuestras variables basandonos en la formula para calcular el discriminante de la formula general y solo \n");
			printf("\t declaramos las que debemos leer las cuales seran a,b,c, nuestro resultado es declarado como Disc el cual no se lee, en este\n"); 
			printf("\tejemplo utilizamos nuestro operador en la formula:\n");
			printf("\tDisc=sqrt(pow(b,2)-4.0*a*c);\n");
			printf("\tDonde a,b,c son las constates de los valores de x, 4.0 es una constante derivada de la formula del discriminante pow(b,2)\n");
			printf("\tes el uso de nuestro operador de potencia que se expresa poniendo la palabra pow seguido de un parentesis con la variable\n");
			printf("\ty la potencia a la cual la vamos a elevar separado por una coma de la forma (n,m) donde n es la variable o numero a elevar\n");
			printf("\ty m es la constante a la cual vamos a elevar a nuestra variable o numero n y sqrt es el uso de nuestro operador de raiz\n");
			printf("\tque se usa escrbiendo la palabra sqrt seguido de un parentesis con el valor o las variables a las cuales le sacaremos la raiz\n");
			break;
			case 7:
			printf("\tSaliendo del menu...\n");
			break;
			default:
			printf("\tOpcion no encontrada...\n");
			break;	
			}
	
	system("pause");
	

}while(opcion!=7);
}
void Funciones(){
	int opcion;
		do{
	system("cls");
	printf("\t\n");
	printf("\t\t\t\t\t\tMenu funciones\n");
	printf("\n\n");
	printf("\t1.- Definicion.\n");
	printf("\t2.- Sintaxis general de una funcion.\n");
	printf("\t3.- Como hacer el llamado a una funcion.\n");
	printf("\t4.- Ejemplo de funcion.\n");
	printf("\t5.- Salida...\n");
	printf("\n\n");
	printf("\tSeleccione una opcion: "); scanf("%d",&opcion);

		
		switch(opcion){
			case 1: 
	printf("\n\n");
	printf("\t\t\t\t\t\tFunciones\n");
	printf("\n\n");
	printf("\tLas funciones nos ayudan a que dentro de nuestra funcion principal solo hayan pocos elementos\n");
	printf("\tentre ellos las declaraciones de variables y llamados de funciones y asi tener un mejor orden \n");
	printf("\ty estructura dentro de nuestro programa, asi si llegamos a tener algun error en algun algoritmo\n");
	printf("\to sintaxis dentro del programa podamos detectarlo de manera mas sencilla.\n");
	printf("\n\n");
	break;
		case 2:
	printf("\n\n");
	printf("\t\t\t\tLa sintaxis general de una funcion es:\n");
	printf("\n\n");
	printf("\tTipo Nombre (Lista de parametros);\n");
	printf("\n\n");
	printf("\tDonde:\n\n");
	printf("\tTipo, se refiere al tipo de variable a retornar, es decir, pongamos un ejemplo, si\n");
	printf("\ttenemos una funcion donde es de tipo flotante (float) esta misma nos va a retornar una variable\n");
	printf("\tde tipo flotante a la hora de llamarla dentro de la funcion principal. Existe un tipo de funcion\n");
	printf("\tque no retorna nada y puede incluir una lista de parametros o no y se usa normalmente para imprimir\n");
	printf("\ttexto en pantalla y que este no llene mucho espacio dentro de la funcion principal, esta funcion es\n");
	printf("\tdenominada funcion vacia o que no retorna nada, declarada con el tipo vacio (void).\n");
	printf("\n\n");
	printf("\tNombre, se refiere al nombre que va a tener nuestra funcion, este sera muy importante al momento\n");
	printf("\tde hacer el llamado a la funcion dentro de la uncion principal y puede ser el nombre que nosotros\n");
	printf("\tdeseemos, por ejemplo, para una funcion que calcule el area de un triangulo, el nombre de esta puede\n");
	printf("\tser AreaTiangulo, o bien A solamente, eso depende del programador, lo importante en este caso es no\n");
	printf("\trepetir nombres si se van a usar varias funciones y/o tener en cuenta que hace cada una de ellas y asi\n");
	printf("\ttener el mejor exito a la hora de programar.\n");
	printf("\n\n");
	printf("\tLista de parametros, se refiere a los parametros previamente declarados dentro de la funcion principal o\n");
	printf("\tdentro de otra funcion y que estos hayan sido retornados a la funcion principal para ser enviados a la\n");
	printf("\tfuncion en la que sean requeridos. Esta lista de parametros puede tener parametros de un tipo diferente a\n");
	printf("\tlos del retorno de la funcion, por ejemplo, la funcion puede ser de tipo flotante (float) y las varibles que\n");
	printf("\tmandamos pueden ser de tipo entero (int).\n");
	printf("\n\n");
	break;
		case 3:
	printf("\n\n");
	printf("\t\t\t\tComo hacer el llamado a una funcion\n");
	printf("\n\n");
	printf("\tHacer el llamado a una funcion es bastante sensillo solo deben tenerse en cuenta algunas cosas para hacerlo\n");
	printf("\tcorrectamente.\n");	
	printf("\tPara hacer el llamado a la funcion es tan sencillo como escribir la variable a retornar por ejemplo en el area\n");
	printf("\tde un triangulo previamente declarada como A seguido del signo igual y el nombre de la funcion, con la lista de\n");
	printf("\tparametros que vamos a mandar teniendo cuidado de soloescribir el nombre de la variable y no el tipo de esta.\n");
	printf("\tEn el caso de tener una funcion que no retornara nada (void), solo basta con escribir el nombre de la funcion\n");
	printf("\tseguido de un par de parentesis vacios sin olvidar el punto y coma.\n");
	printf("\n\n");
	break;
		case 4:
	printf("\n\n");
	printf("\t\t\t\tEjemplo de funcion.\n");
	printf("\n\n");
	printf("\tfloat AreaRectangulo(float a,float b,float A);\n");
	printf("\n\n");
	printf("\tEn este caso tenemos una funcion de tipo flotante llamada AreaRectangulo con parametros tres flotantes, que \n");
	printf("\tnos va a retornar una variable de tipo flotante.\n");
	printf("\n\n");
	printf("\tPara hacer el llamado a la funcion se hace lleva a cabo la siguiente sintaxis dentro de la funcion principal:\n");
	printf("\n\n");
	printf("\tArea=AreaRectangulo(a,b,A);\n");
	printf("\n\n");
	printf("\tPara desarrolar la funcion se hace fura de la funcion principal y lleva la siguiente sintaxis,  siguiendo con \n");
	printf("\tel ejemplo del area de un rectangulo:\n");
	printf("\n\n");
	printf("\tfloat AreaRectangulo(float a,float b,float A){\n");
	printf("\n\n");
	printf("\t//Algoritmo\n");
	printf("\n\n");
	printf("\treturn A;\n");
	printf("\n\n");
	printf("\t}\n");
	printf("\n\n");
	break;
		case 5:
	printf("\tSaliendo...\n");
	printf("\n\n");
	break;
	default:
	printf("\tOpcion no encontrada... \n");
	printf("\n\n");
	break;			
		}
		system("pause");
	}while(opcion!=5);
}
