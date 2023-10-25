#include "grid.h"
#include "box.h"
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

using namespace std::this_thread;
using namespace std::chrono;

Grid::Grid()
{
    
    i = 0;
    j = 0;
    k = 0;

    for (int m = 0; m < 4; m++)
    {
        for (int n = 0; n < 4; n++)
        {

            Box* box = new Box(0, m, n);
            tab[m][n] = box;
            
            free_tab[m * 4 + n] = box;

        }
    }
}

void Grid::display()
{
    for (i = 0; i < 5; i++) {

        for (k = 0; k < 4; k++) {
            cout << " ----";
            if (k == 3)
                cout << endl;
        }

        if (i < 4) {
            for (j = 0; j < 4; j++) {



                cout << "|  " << tab[i][j]->getValue() << " ";
                if (j == 3)
                    cout << "|" << endl;


            }
        }
    }
}

int Grid::randomNum(int offset, int range) {
    srand(time(NULL));
    int randNum = offset + (rand() % range);
    return randNum;
}


void Grid::addBox()
{
    int randValue = randomNum(1, 2);
    randValue = randValue * 2;
    cout << randValue << endl;
    int randBox = randomNum(0, 15);
    cout << randBox << endl;
    free_tab[randBox]->setValue(randValue);
    sleep_until(system_clock::now() + seconds(1));
}

void Grid::debut()
{

    for (i = 0; i < 2; i++) {
        addBox();
        

    }
}