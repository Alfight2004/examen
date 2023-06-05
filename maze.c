#include "maze.h"
#include <stdio.h>

int maze[5][5] = {
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 1, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 1, 0}
};

void printMaze() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (maze[i][j] == 0) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }
        printf("\n");
    }
}