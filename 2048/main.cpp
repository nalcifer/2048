#include <iostream>
#include "grid.h"
#include "box.h"
#include "game.h"

using namespace std;

/***
* MAIN
*
* Running game loop
*/
int main()
{
    srand(time(NULL)); 
    gameLoop();
    return 0;
}



/*
  ----- ----- ----- -----
 |     |16834|     |     |
  ----- ----- ----- -----
 |     |     |     |  2  |
  ----- ----- ----- -----
 |     |  16 |     |     |
  ----- ----- ----- -----
 |     | 256 |     | 2048|
  ----- ----- ----- -----
*/