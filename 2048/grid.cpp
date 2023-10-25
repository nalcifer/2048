#include "grid.h"
#include <iostream>

using namespace std;

Grid::Grid()
{
    i = 0;
    j = 0;
    k = 0;

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



                cout << "|  " << tab[i][j] << " ";
                if (j == 3)
                    cout << "|" << endl;


            }
        }
    }
}