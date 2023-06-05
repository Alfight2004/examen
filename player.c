#include "maze.h"

int playerX = 0; // posición inicial del jugador en el eje x
int playerY = 0; // posición inicial del jugador en el eje y
int moves = 0;  // contador de movimientos válidos

int isValidMove(int x, int y) {
    if (x >= 0 && x < 5 && y >= 0 && y < 5 && MAZE_H [x][y] == 0) {
        return 1; 
    }
    return 0;
}

void movePlayer(int x, int y) {
    if (isValidMove(x, y)) {
        playerX = x;
        playerY = y;
        moves++;
    }
}

int hasWon() {
    if (playerX == 4 && playerY == 4) {
        return 1;
    }
    return 0;
}