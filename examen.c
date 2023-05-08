#include <stdio.h>
#include <string.h>

// Función para calcular el precio de la ruta
float calcularPrecioRuta(char tipoRuta[], float distancia) {
    float precio;
    if (strcmp(tipoRuta, "Urbana") == 0) {
        precio = 0.10;
    } else if (strcmp(tipoRuta, "Interurbana") == 0) {
        precio = 0.15;
    } else if (strcmp(tipoRuta, "Internacional") == 0) {
        precio = 0.20;
    } else {
        printf("Tipo de ruta inválido\n");
        return 0.0;
    }
    return precio * distancia;
}

// Función para calcular el descuento
float calcularDescuento(float costoTotal) {
    float descuento;
    if (costoTotal < 50.0) {
        descuento = 0.0;
    } else if (costoTotal >= 50.0 && costoTotal < 100.0) {
        descuento = costoTotal * 0.05;
    } else if (costoTotal >= 100.0 && costoTotal < 500.0) {
        descuento = costoTotal * 0.10;
    } else {
        descuento = costoTotal * 0.20;
    }
    return descuento;
}

// Función para realizar operaciones de transporte
void operacionTransporte() {
    int i;
    char tipoRuta[20];
    float distancia, subtotal, descuento, precioTotal;

    for (i = 1; i <= 5; i++) {
        printf("Cliente %d:\n", i);
        printf("Tipo de ruta (Urbana, Interurbana, Internacional): ");
        scanf("%s", tipoRuta);
        printf("Distancia en kilómetros: ");
        scanf("%f", &distancia);

        subtotal = calcularPrecioRuta(tipoRuta, distancia);
        descuento = calcularDescuento(subtotal);
        precioTotal = subtotal - descuento;

        printf("Subtotal: $%.2f\n", subtotal);
        printf("Descuento: $%.2f\n", descuento);
        printf("Precio total: $%.2f\n", precioTotal);
        printf("\n");
    }
}

// Función para interactuar en la red social
void redSocial() {
    int i, noticias = 0, eventos = 0, preguntas = 0;
    char mensaje[100], categoria[20];

    for (i = 1; i <= 5; i++) {
        printf("Mensaje %d:\n", i);
        printf("Contenido del mensaje: ");
        scanf(" %[^\n]", mensaje);
        printf("Categoría (Noticias, Eventos, Preguntas): ");
        scanf("%s", categoria);

        switch (categoria[0]) {
            case 'N':
                noticias++;
                break;
            case 'E':
                eventos++;
                break;
            case 'P':
                preguntas++;
                break;
            default:
                printf("Categoría inválida\n");
                i--;
                break;
        }
    }

    printf("\n");
    printf("Publicaciones:\n");
    printf("Noticias: %d\n", noticias);
    printf("Eventos: %d\n", eventos);
    printf("Preguntas: %d\n", preguntas);
}

// Función para mostrar el menú y manejar las opciones
void menu() {
    int opcion;
 do {
    printf("Menú:\n");
    printf("1. Operación de transporte\n");
    printf("2. Interactuar en la red social\n");
    printf("3. Salir\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            operacionTransporte();
            break;
        case 2:
            redSocial();
            break;
        case 3:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opción inválida\n");
            break;
    }

    printf("\n");
} while (opcion = 3);
}

// Función para el login
int login() {
char usuarios[3][20] = {"alex", "mike", "jon"};
char contrasenas[3][20] = {"123", "456", "321"};
char usuario[20], contrasena[20];
int intentos = 0;
 do {
    printf("Ingrese su usuario: ");
    scanf("%s", usuario);
    printf("Ingrese su contraseña: ");
    scanf("%s", contrasena);

    int i;
    for (i = 0; i < 3; i++) {
        if (strcmp(usuario, usuarios[i]) == 0 && strcmp(contrasena, contrasenas[i]) == 0) {
            return 1;
        }
    }

    intentos++;
    printf("Usuario o contraseña fallidos intento #%d\n", intentos);
} while (intentos < 3);

printf("Imposible ingresar\n");
return 0;
}

// Función principal
int main() {
if (login() == 1) {
menu();
} else {
printf("Credenciales inválidas\n");
}
 return 0;
}