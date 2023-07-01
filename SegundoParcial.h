#pragma once


void Menuparcial2(void){
	printf("\n\t\t\t\t SEGUNDO PARCIAL \n");
	printf("\t\t\t\t 1) CONDICIONALES IF-ELSE \n");
	printf("\t\t\t\t 2) FUNCION SWITCH \n");
	printf("\t\t\t\t 3) CICLOS \n");
	printf("\t\t\t\t 4) REGRESAR \n");
}



void Programa1ifelse(void){
	int n, R;
    float X, RD;
    printf("\t\t\t\t Programa que verifica la potencia de un numero flotante, \n");
    printf("\t\t\t\t para poder calcular la derivada 1 o 2.  \n");
    printf("\t\t\t\t Utilizando los condicionales If-Else\n");
    printf("\n\n\t\t\t\tDigitar la base de la potencia = ");
    scanf("%f",&X);
    printf("\n\t\t\t\tDigitar la potencia   n = ");
    scanf("%d",&n);
    if( n>0 ){ 
    	RD = n * pow(X,n-1);
    	printf("\n\t\t\t\tPrimera derivada %d * %5.2f ^ %d = %5.2f \n",n,X,n-1,RD);
    	printf("\n\t\t\t\tPrimera derivada = %5.2f \n",RD);
	}
    else{ 
        printf("\n\t\t\t\tNo se puede aplicar la primera derivada\n");
	}
}
int Verif_menor(int X){
	return (X<=0) ;
}
int verifica_menor(int X){
	if (X<=0){  return 1;  	}  // una sentencia, 
	else     {	return 0;	}  // es redundante el uso { }
}
int verifica_mayor(int X){
	if (X>=0)	return 1;
	else 		return 0;
}
int verif_menor(int X){
	return (X<=0) ;
}
void programa2ifelse(void){
	int X, R;
	printf("\n\t\t\t\t Diseno de un programa estructurado que verifica \n");
	printf("\n\t\t\t\t si un numero entero es : \n");
	printf("\n\t\t\t\t a)   mayor e igual a cero \n");
	printf("\n\t\t\t\t b)   menor e igual a cero\n");
	printf("\n\t\t\t\t Utilizando los condicionales If-Else\n\n");
	
	printf ("\n\t\t\t\tDeclarar X = ");  scanf("%d",&X);
	R=verifica_menor(X);
    if(R==1) printf("\n\t\t\t\tEl valor de X es menor o igual a cero \n");
    else     printf("\n\t\t\t\tEl valor de X es positivo \n");
    
    printf ("\n\t\t\t\tDeclarar X = ");  scanf("%d",&X);
	R=verifica_mayor(X);
    if(R==1) printf("\n\t\t\t\tEl valor de X es mayor o igual a cero \n");
    else     printf("\n\t\t\t\tEl valor de X es negativo \n");
    
    
     printf ("\n\t\t\t\tDeclarar X = ");  scanf("%d",&X);
     if( Verif_menor(X) )
        printf("\n\t\t\t\t X es menor que cero \n");
     else 
        printf("\n\t\t\t\t X es mayor que cero \n");
}

void Teoriaifelse(void){
	system("cls");
	system("color f9");
	printf("\n\t\t\t\t ESTRUCTURA CONDICIONANTE IF \n\n");
	printf("\t\t\t\t La  sentencia if se le conoce como estructura de seleccion simple y su funcion \n");
	printf("\t\t\t\t es realizar o no una determinada accion o sentencia, basandose en el \n");
	printf("\t\t\t\t resultado de la evaluacion de una expresion (verdadero o falso), en caso de \n");
	printf("\t\t\t\t ser verdadero se ejecuta la sentencia. \n");
	printf("\n\t\t\t\t SINTAXIS GENERAL IF \n\n");
	printf("\t\t\t\t if ( condicion logica )\n\t\t\t\t { Sentencia si es verdadera } \n");
	printf("\n\t\t\t\t Condicion logica puede ser simple o multiple \n\t\t\t\t A<b 	a<b && a%2==0 \n");
	printf("\n\t\t\t\t if ( condicion logica multiple )\n\t\t\t\t { Sentencia1 si es verdadera\n\t\t\t\t  Sentencia 2 si es verdadera\n\t\t\t\t ....} \n\n");
	
	printf("\n\t\t\t\t ESTRUCTURA CONDICIONANTE IF-ELSE \n\n");
	printf("\t\t\t\t La  estructura if / else lo que hace es ejecutar una accion si el resultado de la \n");
	printf("\t\t\t\t evaluacion de la expresión es verdadera y otra acción si el resultado de la \n");
	printf("\t\t\t\t evaluacion es falsa. \n\n");
	printf("\t\t\t\t La diferencia con utilizar solo la estructura if es que si la expresion evaluada \n");
	printf("\t\t\t\t es verdadera solo en ese caso se ejecuta una acción de otro modo se pasa de \n");
	printf("\t\t\t\t largo. En cambio en la estructura if / else si la expresion es falsa entonces se\n");
	printf("\t\t\t\t ejecuta otra accion. \n");
	printf("\n\t\t\t\t SINTAXIS GENERAL IF-ELSE \n\n");
	printf("\t\t\t\t if ( condicion logica )\n");
	printf("\t\t\t\t { Sentencia si es verdadera }\n");
	printf("\t\t\t\t else \n");
	printf("\t\t\t\t { Sentencia si es falsa }\n");
}
void MENUCALC( void ){
	system("color 90");
	printf("\n\n\n");
	printf("\t\t\t\t   M E N U   D E   T R I A N G U L O S  \n ");
	printf("\t\t\t\t ______________________________________\n");
	printf("\t\t\t\t 1.- Calculo de la altura del isoseles \n ");
    printf("\t\t\t\t ______________________________________\n");
	printf("\t\t\t\t 2.- Calculo de la altura del escaleno \n ");
	printf("\t\t\t\t ______________________________________\n");
	printf("\t\t\t\t 3.- S A L I D A \n ");
	printf("\t\t\t\t ______________________________________\n");
}
void CALC_h_ISOS(float a, float b){
	float h;
	h = sqrt( pow(a,2)- ( pow(b,2)/4.0 ) );
	printf("\n\t\t\t\tAltura del triangulo isoseles = %f \n",h);
}
void CALC_h_EQUI(float a){
	float h;
	h = (pow(a,2)*sqrt( 3.0 ) ) / 2.0;
	printf("\n\t\t\t\tAltura del triangulo equilatero = %f \n",h);
}
void Programa1switch (void){
	float a, b, hi, he;
	int opcion;
	system("cls");
	printf("\n\t\t\t\t Diseno de un programa ESTRUCTURADO, que calcula \n");
	printf("\n\t\t\t\t las alturas de 2 triangulos, a travesde un menu.\n");
	printf("\n\t\t\t\t Utilizando switch\n");
	MENUCALC();
	printf("\n\t\t\t\tDigitar la opcion : "); scanf("%d",&opcion);
	switch(opcion){
		case 1:	
				printf("\n\t\t\t\tIngrese el lado a= "); scanf("%f",&a);
				printf("\n\t\t\t\tIngrese el lado b= "); scanf("%f",&b);
				CALC_h_ISOS(a,b);
		       break;
		case 2:
				printf("\n\t\t\t\tIngrese el lado a= "); scanf("%f",&a);
				CALC_h_EQUI(a);
			   break;
		case 3:
			   break;
		default:
			    printf("\n\t\t\t\t Opcion incorrecta\n");
	}
	
}
void MenuPrins(void){
	
	printf("\n\n\n");
	printf("\t\t\t MENU\tPRINCIPAL\n\n");
	printf("\t\t\t 1.- Area de un Triangulo\n");
	printf("\t\t\t 2.- Perimetro de un Triangulo\n");
	printf("\t\t\t 3.- SALIDA\n");
	printf("\n\n\n");
	
	
}
void SubMenu(void){
	printf("\n\n\n");
	printf("\t\t\t MENU\tSECUNDARIO\n\n");
	printf("\t\t\t 1.-Triangulo Rectangulo\n");
	printf("\t\t\t 2.-Triangulo Equilatero\n");
	printf("\t\t\t 3.-Triangulo Isoseles\n");
	printf("\t\t\t 4.- SALIDA\n");
	printf("\n\n\n");
}
float Area_Rectangulo(float a, float b, float c){
	float  S;
	S=(a+b+c/2);
	return (sqrt(S*(S-a)*(S-b)*(S-c)));
}
float Area_Equilatero(float a, float b, float c){
	
	return (sqrt(3/4))*(pow(a,2));
}
float Area_Isoseles(float a, float b, float c){
	float h;
	h=sqrt((pow(a,2)-pow(b,2))/4);
	return ((b*h)/2);
}
float Perimetro_Rectangulo(float a, float b, float c){
	
	return (a+b+c);
}
float Perimetro_Equilatero(float a, float b, float c){
	
	return ((2*a)+b);
}
float Perimetro_Isoseles(float a, float b, float c){
	
	return (a+a+a);
}
int Verif_trian(float a, float b, float c){
	
	if ((a+b>c)&&(a+c>b)&&(b+c>a)){
		return 1;
	}
	else{
		return 0;
	}
}
void programa2switch(void){
	int Opcion,opcion1, opcion2;
	float a, b, c, Area, Perimetro;
	system("cls");
	printf("\n\t\t\t\t Diseno de un programa estructurado \n");
	printf("\n\t\t\t\t que calcula el perimetro o el area del\n");
	printf("\n\t\t\t\t triangulo seleccionado por el usuario,\n");
	printf("\n\t\t\t\t mediante un menu principal con submenus.\n");
	
	MenuPrins();
	
	printf("\t\t\tElija una Opcion:");  scanf("%d",&opcion1);
	
	switch (opcion1){
		
	case 1: system("cls");
			SubMenu();
			printf("\t\t\tElija una Opcion:");	scanf("%d",&opcion2);
			
			switch (opcion2){
				
				case 1: 
						printf ("\t\t\tLado a:"); scanf("%f",&a);
						printf ("\t\t\tLado b:"); scanf("%f",&b);
						printf ("\t\t\tLado c:"); scanf("%f",&c);
						
						if (Verif_trian (a,b,c)==1){
							Area=Area_Rectangulo(a,b,c);}
							else {
								printf("\t\t\tNo es un triangulo\n");
							}
							break;
				case 2:
						printf ("\t\t\tLado a:"); scanf("%f",&a);
						printf ("\t\t\tLado b:"); scanf("%f",&b);
						printf ("\t\t\tLado c:"); scanf("%f",&c);
						
						if ((a==b)&&(a==c)&&(b==c)){
							Area=Area_Equilatero(a,b,c);
						} 
						else{
							printf("\t\t\tNo es Equilatero\n");
						} 
						break;
				case 3:
						printf ("\t\t\tLado a:"); scanf("%f",&a);
						printf ("\t\t\tLado b:"); scanf("%f",&b);
						printf ("\t\t\tLado c:"); scanf("%f",&c);
						
						if (Verif_trian (a,b,c)==1){
							Area=Area_Isoseles(a,b,c);}
							else {
								printf("\t\t\tNo es un triangulo\n");
							}
							break;
				case 4:
					printf("\t\t\tSalida.......\n");
					break;
				default: printf("\t\t\tOpcion incorrecta");
					
			}
		if (opcion2==1||opcion2==2||opcion2==3 ){
			printf("\t\t\tEl Area=%f\n",Area);
			break;
		}
			
	case 2: system("cls");
			SubMenu();
			printf("\t\t\tElija una Opcion:");	scanf("%d",&opcion2);
			
			switch (opcion2){
					
						case 1: 
						printf ("\t\t\tLado a:"); scanf("%f",&a);
						printf ("\t\t\tLado b:"); scanf("%f",&b);
						printf ("\t\t\tLado c:"); scanf("%f",&c);
						
						if (Verif_trian (a,b,c)==1){
							Perimetro=Perimetro_Rectangulo(a,b,c);}
							else {
								printf("\t\t\tNo es un triangulo\n");
							}
							break;
				case 2:
						printf ("\t\t\tLado a:"); scanf("%f",&a);
						
						
							Perimetro=Perimetro_Equilatero(a,b,c);
						
						
						break;
				case 3:
						printf ("\t\t\tLado a:"); scanf("%f",&a);
						printf ("\t\t\tLado b:"); scanf("%f",&b);
						printf ("\t\t\tLado c:"); scanf("%f",&c);
						
						if (Verif_trian (a,b,c)==1){
							Perimetro=Perimetro_Isoseles(a,b,c);}
							else {
								printf("\t\t\tNo es un triangulo\n");
							}
							break;
				case 4:
					printf("\t\t\tSalida.......\n");
					break;
				default: printf("\t\t\tOpcion incorrecta");
														}
					if (opcion2==1||opcion2==2||opcion2==3 ){
			printf("\t\t\tEl Perimetro=%f\n",Perimetro);
			break;}
	case 3: printf("\t\t\tSalida.......\n");
					break;
				default: printf("\t\t\tOpcion incorrecta");
	}
}
float VerifRango(float Xi, float Xf, float Xi2, float Xf2){
	float X;
	
		printf("\n\t\t\t\tIndica el dato : ");
		scanf("%f",&X);
		
		if (!(X<Xi||X>Xf)||!(X<Xi2||X>Xf2)){
			printf("\n\t\t\t\tDato %5.2f leido dentro del rango : [%5.2f,%5.2f], [%5.2f, %5.2f]\n", X, Xi, Xf, Xi2, Xf2);}
			
		else {printf("\n\t\t\t\tDato fuera del rango \n");}
			
	return X;
	system ("pause");
}
void programa3ifelse(void){
	float Xi, Xf, Xi2, Xf2, X;

	printf("\n\t\t\t\t Programa estructurado que verifica si el \n");
	printf("\t\t\t\t dato ingresado, se encuentra dentro de los\n");
	printf("\t\t\t\t rangos ingresados por el usuario. Utilizando \n");
	printf("\t\t\t\t condicionales if-else.\n");
	
	printf("\n\t\t\t\tIndicar el rango inferior 1 : "); scanf("%f",&Xi);
	printf("\n\t\t\t\tIndicar el rango superior 1: "); scanf("%f",&Xf);

	printf("\n\t\t\t\tIndicar el rango inferior 2 : "); scanf("%f",&Xi2);
	printf("\n\t\t\t\tIndicar el rango superior 2: "); scanf("%f",&Xf2);

	X=VerifRango(Xi,Xf, Xi2, Xf2);
}
			
void Programa1ciclos(){
	system("cls");
	printf("\n\t Diseno de un programa que visualiza el comportamiento del ciclo for en sus componentes \n");
	printf("\n\t En segunda fila de valores, los grados se convierten radianes con la formula (g*M_PI)/180\n");
	printf("\n\t en la segunda fila nos proporciona los valores del seno de los grados convertidos a radianes\n");
	printf("\n\t en la tercera fila nos proporciona los valores del coseno de los grados convertidos a radianes\n");
	printf("\n\t y en la cuarta fila nos proporciona los valores de la tangente de los grados convertidos a radianes\n");
		int i;   float g=0, r, Se, Co, Ta;
			printf(" \n\n\t Tabla de valores para las razones trigonometricas\n");
			printf(" \t ______________________________________________________________\n");
			printf(" \t ____0___________90___________180___________270__________360___\n");
    		printf(" \t ______________________________________________________________\n\t");
    for(g=0; g<=360; g = g+90){
    	r = (g*M_PI)/180.0;  
   	   		printf("   %5.2f rad",r);
	}
			printf("\n \t ______________________________________________________________\n\t");
    for(g=0; g<=360; g = g+90){
    	r = (g*M_PI)/180.0;
    		Se = sin(r);  
   	   		printf("   %5.2f     ",Se);
	}
			printf("\n \t ______________________________________________________________\n\t");	
	for(g=0; g<=360; g = g+90){
    	r = (g*M_PI)/180.0;
    		Co = cos(r);
   	   		printf("   %5.2f     ",Co);
	}
			printf("\n \t ______________________________________________________________\n\t");
	for(g=0; g<=360; g = g+90){
    	r = (g*M_PI)/180.0;
    		Ta = tan(r); 
   	   		if(Ta<0)	  printf("  indeterm. ");
   	   		else    
			printf("   %5.2f      ",Ta);
	}
			printf("\n \t ______________________________________________________________\n");
			
}

void gotoxy (int x, int y){
 HANDLE hcon; //Controladores que identifican la salida de coordenadas.
 hcon = GetStdHandle(STD_OUTPUT_HANDLE);
 COORD dwPos;

 dwPos.X = x; //Establece las coordenadas X.
 dwPos.Y = y; //Establece las coordenadas Y.

 SetConsoleCursorPosition(hcon,dwPos); //Establece la posicion final del cursor.
}

void tabla (int x, int y){
	printf("\t\t\t\t\t\t\t X \t Y \n");
	for (x=-3, y=(pow(x,2)-(6*x)+11); x<=9; x++,y=(pow(x,2)-(6*x)+11)){
		printf("\t\t\t\t\t\t\t___________\n");
		printf("\t\t\t\t\t\t\t %d \t %d \n",x,y);
	}
}
void Programa2ciclos(){
	system("cls");
	printf("\n\t\t\t\t Diseno de un programa que visualiza las coordenadas\n");
	printf("\n\t\t\t\t x, y utilizando la funcion gotoxy(x,y) y ciclos\n\n");
	printf("\n\t\t\t\t En este programa visualizamos la grafica de una parabola la\n");
	printf("\n\t\t\t\t cual su ecuacion es y=x^2-6x+11 y a un lado suyo encontramos \n");
	printf("\n\t\t\t\t su tabla de valores en x & y en con un rango de [-3,9]\n\n\n");
		
		float r;   float x, y;
		
system("color f9");

	tabla (x,y);

for(int a=1; a<50; a++){
	gotoxy(a,10);
	printf("%c",196);  Sleep(50);
}
for(int a=1; a<25; a++){
	gotoxy(10,a);
	printf("%c",179); Sleep(50);
}
for(x=-3;  x<=9; x++){
    	x=x;
    	y=(pow(x,2)-(6*x)+11);
    
    	
		gotoxy(10+x,10-(y/5)); printf("."); Sleep(50);
	     	
	}
		while(!kbhit());
		
}
void PROGRAMASSWITCH(void){
	system("cls");
	int op2p34;
	printf("\n\t\t\t\t PROGRAMAS  \n");
	printf("\t\t\t\t 1) Programa 1 \n");
	printf("\t\t\t\t 2) Programa 2\n");
	printf("\t\t\t\t 3) REGRESAR \n");
	
	printf("\n\t\t\t\t Selecione la opcion: "); scanf("%d", &op2p34);
	
	switch(op2p34){
		do{
		case 1:
			Programa1switch();
			break;
		case 2:
			programa2switch();
			break;
		case 3:
			printf("\n\tRegresando......");
			break;
		default:
			printf("\n\t\t\t\tOpcion incorrecta\n");
			
			system("pause");
		}while(op2p34!=3);
		}
}
void TeoriaSwitch(){
	system("cls");
	system("color f9");
	printf("\n\t\t\t\t SENTENCIA SWITCH \n\n");
	printf("\t\t\t En la sentencia switch, la expresion a evaluar sea entera o caracter, \n");
	printf("\t\t\t por lo tanto, el numero de opciones es mucho mayor, y en consecuencia,\n");
	printf("\t\t\t tambien es mayor el numero de diferentes sentencias que se pueden ejecutar. \n\n\n");
	printf("\t\t\t\t SINTAXIS  \n\n");
	printf("\t\t\t switch (<expresion entera>) \n");
	printf("\t\t\t {  \n");
	printf("\t\t\t case <expresion constante numerica>: \n");
	printf("\t\t\t\t\t [<sentencias>] \n");
	printf("\t\t\t\t\t break; \n");
	printf("\t\t\t case <expresion constante numerica>: \n");
	printf("\t\t\t\t\t [<sentencias>] \n");
	printf("\t\t\t\t\t break; \n");
	printf("\t\t\t.....  \n");
	printf("\t\t\t case <expresion constante numerica>: \n");
	printf("\t\t\t\t\t [<sentencias>] \n");
	printf("\t\t\t\t\t break; \n");
	printf("\t\t\t default : [<sentencia>] \n");
	printf("\t\t\t }  \n\n");
	printf("\t\t\t___________________________________________________\n\n");
	printf("\t\t\t switch (<expresion caracter>) \n");
	printf("\t\t\t {  \n");
	printf("\t\t\t case <expresion caracter entre apostrofos>: \n");
	printf("\t\t\t\t\t [<sentencias>] \n");
	printf("\t\t\t\t\t break; \n");
	printf("\t\t\t case <expresion caracter entre apostrofos>: \n");
	printf("\t\t\t\t\t [<sentencias>] \n");
	printf("\t\t\t\t\t break; \n");
	printf("\t\t\t.....  \n");
	printf("\t\t\t case <expresion caracter entre apostrofos>: \n");
	printf("\t\t\t\t\t [<sentencias>] \n");
	printf("\t\t\t\t\t break; \n");
	printf("\t\t\t default : [<sentencia>] \n");
	printf("\t\t\t }  \n\n\n");
	
}
void TeoriaFor(){
	system("cls");
	system("color f9");
	printf("\n\n\t\t\t Los ciclos nos permiten ejecutar una o varias lineas de codigo de forma  \n");
	printf("\t\t\t repetida (loop). \n\n");
	printf("\n\t\t\t\t ESTRUCTURA FOR \n\n");
	printf("\t\t\t Tiene una condicion o expresion logica que controla la secuencia  \n");
	printf("\t\t\t de repeticion. \n");
	printf("\t\t\t La posicion de esta condicion significa que pre-verifica de modo \n");
	printf("\t\t\t que cuando se ejecuta el mismo , se evalua la condicion antes de \n");
	printf("\t\t\t que se ejecute el cuerpo del ciclo. \n\n");
	
	printf("\t\t\t___________________________________________________\n\n");
	printf("\t\t\t\t\t SINTAXIS GENERAL \n");
	printf("\t\t\t for (inicio ; expresion logica ; incremento o decremento \n");
	printf("\t\t\t  )\n");
	printf("\t\t\t  { \n");
	printf("\t\t\t  //algoritmo\n");
	printf("\t\t\t  }\n\n");
}
	
void TeoriaWhile(){
	system("cls");
	system("color f9");
	printf("\n\n\t\t\t Los ciclos nos permiten ejecutar una o varias lineas de codigo de forma  \n");
	printf("\t\t\t repetida (loop). \n\n");
	printf("\n\t\t\t\t ESTRUCTURA WHILE \n\n");
	printf("\t\t\t Tiene una condicion o expresion logica que controla la secuencia  \n");
	printf("\t\t\t de repeticion. \n");
	printf("\t\t\t La posicion de esta condicion significa que pre-verifica de modo \n");
	printf("\t\t\t que cuando se ejecuta el mismo , se evalua la condicion antes de \n");
	printf("\t\t\t que se ejecute el cuerpo del ciclo. \n\n");
	
	printf("\t\t\t___________________________________________________\n\n");
	printf("\t\t\t\t\t SINTAXIS GENERAL \n");
	printf("\t\t\t  //variable inicial \n");
	printf("\t\t\t  while (expresion logica con variable){\n");
	printf("\t\t\t  //algoritmo \n");
	printf("\t\t\t  //variable en incremento o decremento\n");
	printf("\t\t\t  }\n\n");	
}
void TeoriaDowhile(){
system("cls");
	system("color f9");
	printf("\n\n\t\t\t Los ciclos nos permiten ejecutar una o varias lineas de codigo de forma  \n");
	printf("\t\t\t repetida (loop). \n\n");
	printf("\n\t\t\t\t ESTRUCTURA DO-WHILE \n\n");
	printf("\t\t\t Esta nos da la posibilidad de ejecutar primero el bloque de instrucciones\n");
	printf("\t\t\t antes de evaluar la condicion necesaria, de este modo los ciclos do-while, \n");
	printf("\t\t\t son mas efectivos para algunas situaciones especificas.\n");
	
	printf("\t\t\t___________________________________________________\n\n");
	printf("\t\t\t\t\t SINTAXIS GENERAL \n");
	printf("\t\t\t  //variable inicial \n");
	printf("\t\t\t  do{");
	printf("\t\t\t  //algoritmo \n");
	printf("\t\t\t  //variable en incremento o decremento\n");
	printf("\t\t\t  }while(Expresion logica con variable);\n\n");
}
void ProgramasCiclos(){
	system("cls");
	int op2p34;
	printf("\n\t\t\t\t PROGRAMAS  \n");
	printf("\t\t\t\t 1) Programa 1 \n");
	printf("\t\t\t\t 2) Programa 2\n");
	printf("\t\t\t\t 3) REGRESAR \n");
	
	printf("\n\t\t\t\t Selecione la opcion: "); scanf("%d", &op2p34);
	
	switch(op2p34){
		do{
		case 1:
			Programa1ciclos();
			break;
		case 2:
			Programa2ciclos();
			break;
		case 3:
			printf("\n\t\t\t\tRegresando......\n");
			break;
		default:
			printf("\n\t\t\t\tOpcion incorrecta\n");
			
			system("pause");
		}while(op2p34!=3);
		}
}
void TEORIACICLOS(void){
	int opcion;
	do{system("cls");
	printf("\n\t\t\t\t ESTRUCTURAS DE CONTROL CICLICO \n");
	printf("\t\t\t\t 1) CICLO FOR \n");
	printf("\t\t\t\t 2) CICLO WHILE \n");
	printf("\t\t\t\t 3) CICLO DO-WHILE \n");
	printf("\t\t\t\t 4) REGRESAR \n");
	
	printf("\n\t\t\t\t Selecione la opcion: "); scanf("%d", &opcion);
		switch(opcion){
			case 1:
					TeoriaFor();
				break;
			case 2: 
					TeoriaWhile();
				break;
			case 3: 
					TeoriaDowhile();
				break;
			case 4:
				printf("\n\t\t\t\tRegresando......\n");
				break;
			default:
		printf("\n\t\t\t\tOpcion incorrecta\n");
	}system("pause");
	}while(opcion!=4);
}
void PROGRAMASIfElse(void){
	system("cls");
	int op2p33;
	printf("\n\t\t\t\t PROGRAMAS  \n");
	printf("\t\t\t\t 1) Programa 1 \n");
	printf("\t\t\t\t 2) Programa 2\n");
	printf("\t\t\t\t 3) Programa 3\n");
	printf("\t\t\t\t 4) REGRESAR \n");
	
	printf("\n\t\t\t\t Selecione la opcion: "); scanf("%d", &op2p33);
	
	switch(op2p33){
		do{
		case 1:
			Programa1ifelse();
			break;
		case 2:
			programa2ifelse();
			break;
		case 3:
			programa3ifelse();
			break;
		case 4:
			printf("\n\\t\t\t\tRegresando......\n");
			break;
		default:
			printf("\n\t\t\t\tOpcion incorrecta\n");
			
			system("pause");
		}while(op2p33!=3);
	}
}
void MenuIfElse(void){
	int opcion2p1;
	do{system("cls");
	printf("\n\t\t\t\t CONDICIONALES IF-ELSE \n");
	printf("\t\t\t\t 1) TEORIA \n");
	printf("\t\t\t\t 2) PROGRAMAS \n");
	printf("\t\t\t\t 3) REGRESAR \n");
	
	printf("\n\t\t\t\t Selecione la opcion: "); scanf("%d", &opcion2p1);
		switch(opcion2p1){
			case 1:
				Teoriaifelse();
				break;
			case 2: 
				PROGRAMASIfElse();
				break;
			case 3:
				printf("\n\t\t\t\tRegresando......\n");
				break;
			default:
		printf("\n\t\t\t\tOpcion incorrecta\n");
	}system("pause");
	}while(opcion2p1!=3);
}
void MenuSwitch(void){
	int opcion2p2;
	do{system("cls");
	printf("\n\t\t\t\t FUNCION SWITCH \n");
	printf("\t\t\t\t 1) TEORIA \n");
	printf("\t\t\t\t 2) PROGRAMAS \n");
	printf("\t\t\t\t 3) REGRESAR \n");
	
	printf("\n\t\t\t\t Selecione la opcion: "); scanf("%d", &opcion2p2);
		switch(opcion2p2){
			case 1:
				TeoriaSwitch();
				break;
			case 2: 
				PROGRAMASSWITCH();
				break;
			case 3:
				printf("\n\t\t\t\tRegresando......\n");
				break;
			default:
		printf("\n\t\t\t\tOpcion incorrecta\n");
	}system("pause");
	}while(opcion2p2!=3);
}
void MenuCiclos(void){
	int opcion2p3;
	do{system("cls");
	printf("\n\t\t\t\t CICLOS \n");
	printf("\t\t\t\t 1) TEORIA \n");
	printf("\t\t\t\t 2) PROGRAMAS \n");
	printf("\t\t\t\t 3) REGRESAR \n");
	
		printf("\n\t\t\t\t Selecione la opcion: "); scanf("%d", &opcion2p3);
		switch(opcion2p3){
			case 1:
				TEORIACICLOS();
				break;
			case 2: 
				ProgramasCiclos();
				break;
			case 3:
				printf("\n\t\t\t\tRegresando......\n");
				break;
			default:
		printf("\n\t\t\t\tOpcion incorrecta\n");
	}system("pause");
	}while(opcion2p3!=3);
}



