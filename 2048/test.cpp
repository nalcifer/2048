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
//		if (pgrid->compareTab(end_tab) == false) {
//			std::cout << "Test de deplacement et de fusion : Success" << std::endl;
//		}
//		else {
//			std::cout << "Test de deplacement et de fusion : Failure" << std::endl;
//		};
//	}
//
//		/*if (oGrid->compare(iEndTab)) {
//			
//	void win() {
//		
//	}
//	void lose() {
//		
//	}
//
//	void compare_tab()
//	{
//
//	}*/
//
//}