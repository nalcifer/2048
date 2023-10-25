#include "grid.h"
#include "box.h"
#include <iostream>

using namespace std;

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
            //tab[m][n]->DisplayInformation();
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

int Grid::randomNum() {
    srand(time(NULL));
    int randNum = 1 + (rand() % 2);
    randNum = randNum * 2;
    cout << randNum << endl;
    return randNum;
}

void Grid::debut()
{
    randomNum();
}