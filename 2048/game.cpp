#include <iostream>

#include "grid.h"
#include "box.h"
#include "input.h"
#include "test.h"

#include "game.h"

using namespace test;

/***
* METHOD
*   gameLoop
*/
void gameLoop()
{
	bool is_finish = false;

    //testFusion();
    //testWin();
    //testLose();


    Grid* pgrid = new Grid();

    pgrid->debut();
    pgrid->display();

	do
	{
        pgrid->movement();
        pgrid->addBox();
        pgrid->display();

        if (pgrid->canMove() == false)
        {
            if (pgrid->restart() == true)
            {
                delete pgrid;

                Grid* pgrid = new Grid();

                pgrid->debut();
                pgrid->display();
            }
            else {
                is_finish = true;
                pgrid->endGame();
            }
        }

	} while (is_finish == false);

    std::cout << "finish";

    delete pgrid;
}

