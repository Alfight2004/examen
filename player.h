#ifndef PLAYER_H
#define PLAYER_H

extern int playerX;
extern int playerY;
extern int moves;

int isValidMove(int x, int y);
void movePlayer(int x, int y);
int hasWon();

#endif