#include "grid.h"
#include "box.h"
#include "input.h"

#include <iostream>
#include <chrono>
#include <thread>
#include <algorithm>
#include <iterator>

using namespace std;

using namespace std::this_thread;
using namespace std::chrono;

template <typename T>
void remove(std::vector<T>& v, size_t index) {
    v.erase(v.begin() + index);
}

Grid::Grid()
{
    x = 0, y = 0;

    i = 0;
    j = 0;
    k = 0;

    for (int m = 0; m < 4; m++)
    {
        for (int n = 0; n < 4; n++)
        {

            Box* box = new Box(0, m, n);
            tab[m][n] = box;
            
            free_tab.push_back(box);

        }
    }
}

void Grid::display()
{
    //system("cls");

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
    int randBox = randomNum(0, free_tab.size());
    cout << randBox << endl;
    
    free_tab[randBox]->setValue(randValue);
    free_tab[randBox]->setEmpty(false);

    remove(free_tab, randBox);
    sleep_until(system_clock::now() + seconds(1));
    cout << free_tab.size() << endl;
}

void Grid::debut()
{

    for (i = 0; i < 2; i++) {
        addBox();
    }
}

void Grid::getDirection()
{
    int direction = directionnalArrowInput();
    
    switch (direction) 
    {
    case 0 :
        x = 1;
        break;
    case 1:
        x = -1;
        break;
    case 2:
        y = 1;
        break;
    case 3:
        y = -1;
        break;
    }
}

void Grid::movement()
{
    int direction[2];

    getDirection();
    
    direction[0] = x;
    direction[1] = y;

    cout << x;
    
    if (x == 1) {
        moveUp();
    }
    //cout << direction[0] << endl << direction[1] << endl;
}

void Grid::moveUp() {
    for (i = 1; i < 4; i++){
        for (j = 0; j < 4; j++) {
            if (tab[i][j]->getEmpty() == false) {
                for (k = i; k >= 0; k--) {
                    if (tab[i - k][j]->getEmpty() == true) {
                        
                        Box* temp = tab[i - k][j];
                        tab[i - k][j] = tab[i][j];
                        tab[i][j] = temp;

                    }
                }
            }
        }
    }
}

