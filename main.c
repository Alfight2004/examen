#include <stdio.h>

#include "player.h"

void nuevoJuego() {
    int playerX = 0;
     int playerY = 0;
     int moves = 0;

    printf("¡Bienvenido al juego del laberinto!\n");
    printf("Instrucciones: Utilice las teclas WASD para mover al jugador.\n");

    while (1) {
        printf("\n");
        printMaze();

        if (hasWon()) {
            printf("\n¡¡¡Felicidades, has ganado!!! Eres un pro!!\n");
            break;
        }

        char move;
        printf("\nIngrese su movimiento: ");
        scanf(" %c", &move);

        int newX = playerX;
        int newY = playerY;

        if (move == 'w') {
            newY--;
        } else if (move == 's') {
            newY++;
        } else if (move == 'a') {
            newX--;
        } else if (move == 'd') {
            newX++;
        } else {
            printf("\nMovimiento inválido. Por favor, utilice las teclas WASD.\n");
            continue;
        }

        movePlayer(newX, newY);

        if (!isValidMove(newX, newY)) {
            printf("\nMovimiento inválido. No puedes atravesar las paredes ni salir del laberinto.\n");
        }
    }
}

int main() {
    int choice;
    printf("Bienvenido al juego del laberinto!\n");

    while (1) {
        printf("\nMenú:\n");
        printf("1. Jugar\n");
        printf("2. Créditos\n");
        printf("3. Salir\n");
        printf("Ingrese su opción: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nuevoJuego();
                break;
            case 2:
                printf("\nCréditos:\n");
                printf("Este juego fue creado por [Tu nombre].\n");
                break;
            case 3:
                printf("\n¡Gracias por jugar! ¡Hasta luego!\n");
                return 0;
            default:
                printf("\nOpción inválida. Por favor, ingrese un número válido del menú.\n");
        }
    }

    return 0;
}