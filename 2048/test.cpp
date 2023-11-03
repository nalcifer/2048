//#include "test.h"
//
//#include "grid.h"
//
//#include <iostream>
//
//namespace test
//{
//	void testFusion() {
//		int debut_tab[4][4] = {
//			{ 2,2,0,0 },
//			{ 4,0,0,0 },
//			{ 8,16,0,0 },
//			{ 0,0,0,0 }
//			};
//
//		int end_tab[4][4] = { 
//			{ 0,0,0,0 },
//			{ 0,0,0,0 },
//			{ 0,0,0,0 },
//			{ 0,0,0,32 } 
//		};
//
//		Grid* pgrid = new Grid(debut_tab);
//		pgrid->display();
//		pgrid->moveLeft();
//		pgrid->moveUp();
//		pgrid->moveDown();
//		pgrid->moveRight();
//		pgrid->display();
//
//		if (pgrid->compareTab(end_tab) == true) {
//			std::cout << "Test de deplacement et de fusion : Success" << std::endl;
//		}
//		else {
//			std::cout << "Test de deplacement et de fusion : Failure" << std::endl;
//		};
//	}
//
//		/*if (oGrid->compare(iEndTab)) {
//			
//	void testWin() {
//		int debut_tab[4][4] = {
//			{ 0,0,0,0 },
//			{ 0,0,0,0 },
//			{ 0,0,0,0 },
//			{ 1024,1024,0,0 }
//			};
//
//		int end_tab[4][4] = { 
//			{ 0,0,0,0 },
//			{ 0,0,0,0 },
//			{ 0,0,0,0 },
//			{ 2048,2048,0,0 } 
//		};
// 
//		Grid* pgrid = new Grid(debut_tab);
//		pgrid->display();
//		pgrid->moveLeft();
//		pgrid->display();
//
//		if (pgrid->compareTab(end_tab) == true) {
//			std::cout << "Test de deplacement et de fusion : Success" << std::endl;
//		}
//		else {
//			std::cout << "Test de deplacement et de fusion : Failure" << std::endl;
//		};
//	}
//	void testLose() {
//		int debut_tab[4][4] = {
//			{ 4,2,4,2 },
//			{ 2,4,2,4 },
//			{ 4,2,4,2 },
//			{ 2,4,2,4 }
//			};
//
//		int end_tab[4][4] = {
//			{ 4,2,4,2 },
//			{ 2,4,2,4 },
//			{ 4,2,4,2 },
//			{ 2,4,2,4 }
//			};
// 
//		Grid* pgrid = new Grid(debut_tab);
//		pgrid->display();
//
//		if (pgrid->compareTab(end_tab) == true) {
//			std::cout << "Test de deplacement et de fusion : Success" << std::endl;
//		}
//		else {
//			std::cout << "Test de deplacement et de fusion : Failure" << std::endl;
//		};
//	}
//
//}