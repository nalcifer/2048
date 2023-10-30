#include <iostream>
#include <thread>
#include <chrono>

#include "grid.h"
#include "box.h"
#include "input.h"

#include "game.h"

void gameLoop()
{
	bool is_finish = false;

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
            is_finish = true;
        }

	} while (is_finish == false);

    std::cout << "finish";

    delete pgrid;
}

