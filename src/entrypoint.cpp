#include "entrypoint.h"
#include "raylib.h"
#include <time.h>
#define MAX_COL 14
#define MAX_ROW 14
#define WIN_W MAX_COL * RECT_SIZE
#define WIN_H MAX_ROW * RECT_SIZE
#define RECT_SIZE 64
//Creer votre class Engin ici et appeler une fonction start que vous définisser à la classe dans la fonction raylib_start plus bas.
void raylib_start(void){
    InitWindow(WIN_W, WIN_H, "conways.test");
    SetRandomSeed(time(NULL));
    while (!WindowShouldClose)
    {
        BeginDrawing();
        ClearBackground(WHITE);
        
        EndDrawing(); 
    }
}