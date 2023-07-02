#define LIMITE_INT 3
#define CLAVE_ACESO "923571"

bool authenticate() {
    int intentos = 0;
    char clave[20];

    while (intentos < LIMITE_INT) {
        printf("\t\t\t Ingrese la clave de acceso: ");
        scanf("%s",&clave);

        if (strcmp(clave, CLAVE_ACESO) == 0) {
            return true;
        } else {
            printf("Clave incorrecta. Intentos restantes: %d\n", LIMITE_INT - intentos - 1);
            intentos++;
        }
    }

    return false;
}