#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char entrada[20]; // Aquí almacenaremos la entrada del usuario como texto
    int valorEntero;
    float valorFlotante;
    bool valorBooleano;
    char valorCaracter;
    int punto=0,i=0;
    printf("Introduce un valor: ");
    scanf("%19s", entrada); // Leemos la entrada del usuario como texto para verificar el tipo

    while (entrada[i] != '\0'){
        if(entrada[i]== '.')
        punto++;
        i++;
    }
    // Verificamos si la entrada es de tipo entero
    if (sscanf(entrada, "%f", &valorFlotante) == 1 && punto == 1) {
        printf("La entrada es de tipo flotante.\n");
    }
    else if (sscanf(entrada, "%d", &valorEntero) == 1) {
        printf("La entrada es de tipo entero.\n");
    }
    // Verificamos si la entrada es de tipo flotante (pero no entero)
    // Verificamos si la entrada es de tipo booleano (true o false)
    else if (strcmp(entrada, "true") == 0 || strcmp(entrada, "false") == 0) {
        valorBooleano = (strcmp(entrada, "true") == 0) ? true : false;
        printf("La entrada es de tipo booleano y es %s.\n", valorBooleano ? "true" : "false");
    }
    // Verificamos si la entrada es de tipo carácter (solo un carácter)
    else if (strlen(entrada) == 1) {
        valorCaracter = entrada[0];
        printf("La entrada es de tipo carácter y es '%c'.\n", valorCaracter);
    }
    // Si no es ninguno de los anteriores, asumimos que es una cadena
    else {
        printf("La entrada es de tipo cadena.\n");
    }

    return 0;
}