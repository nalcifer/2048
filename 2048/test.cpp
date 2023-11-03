#include "test.h"

#include "grid.h"

#include <iostream>
#include <chrono>
#include <thread>

using namespace std::this_thread;
using namespace std::chrono;

namespace test
{
	void testFusion() {
		int debut_tab[4][4] = {
			{ 2,2,0,0 },
			{ 4,0,0,0 },
			{ 8,16,0,0 },
			{ 0,0,0,0 }
			};

		int end_tab[4][4] = { 
			{ 0,0,0,0 },
			{ 0,0,0,0 },
			{ 0,0,0,0 },
			{ 0,0,0,32 } 
		};

		Grid* pgrid = new Grid(debut_tab);
		pgrid->display();
		sleep_until(system_clock::now() + seconds(1));
		pgrid->moveLeft();
		pgrid->display();
		sleep_until(system_clock::now() + seconds(1));
		pgrid->moveUp();
		pgrid->display();
		sleep_until(system_clock::now() + seconds(1));
		pgrid->moveDown();
		pgrid->display();
		sleep_until(system_clock::now() + seconds(1));
		pgrid->moveRight();
		pgrid->display();
		sleep_until(system_clock::now() + seconds(1));

		if (pgrid->compareTab(end_tab) == true) {
			std::cout << "Test de deplacement et de fusion : Success" << std::endl;
		}
		else {
			std::cout << "Test de deplacement et de fusion : Failure" << std::endl;
		};
	}

	void testWin() {
		int debut_tab[4][4] = {
			{ 0,0,0,0 },
			{ 0,0,0,0 },
			{ 0,0,0,0 },
			{ 1024,1024,0,0 }
			};

		int end_tab[4][4] = { 
			{ 0,0,0,0 },
			{ 0,0,0,0 },
			{ 0,0,0,0 },
			{ 2048,2048,0,0 } 
		};
 
		Grid* pgrid = new Grid(debut_tab);
		pgrid->display();
		sleep_until(system_clock::now() + seconds(1));
		pgrid->moveLeft();
		sleep_until(system_clock::now() + seconds(1));

		if (pgrid->compareTab(end_tab) == true) {
			std::cout << "Test de deplacement, fusion et win: Success" << std::endl;
		}
		else {
			std::cout << "Test de deplacement, fusion et win : Failure" << std::endl;
		};
	}
	void testLose() {
		int debut_tab[4][4] = {
			{ 4,2,4,2 },
			{ 2,4,2,4 },
			{ 4,2,4,2 },
			{ 2,4,2,4 }
			};

		int end_tab[4][4] = {
			{ 4,2,4,2 },
			{ 2,4,2,4 },
			{ 4,2,4,2 },
			{ 2,4,2,4 }
			};
 
		Grid* pgrid = new Grid(debut_tab);
		pgrid->display();

		if (pgrid->compareTab(end_tab) == true) {
			std::cout << "Test de lose : Success" << std::endl;
		}
		else {
			std::cout << "Test de lose : Failure" << std::endl;
		};
	}

}