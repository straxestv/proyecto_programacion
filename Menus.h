#pragma once
void MenuPrin(void) {
	printf("==================================================== \n");
	printf("\t\t PARCIALES \n");
	printf("\t\t 1) PARCIAL 1 \n");
	printf("\t\t 2) PARCIAL 2 \n");
	printf("\t\t 3) PARCIAL 3 \n");
	printf("\t\t 4) SALIR DEL MENU \n");

}

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
            ///    printf("");
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
