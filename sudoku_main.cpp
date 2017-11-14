#include <iostream>
#include <list>
#include "Sudoku.h"

int main() {
	int A[9][9] = {{7,0,0,0,4,0,0,0,9},
	               {0,3,1,5,0,0,0,0,4},
								 {0,6,4,0,8,9,0,0,0},
								 {0,2,0,0,0,0,4,0,0},
								 {8,0,0,0,3,0,0,0,1},
								 {0,0,5,0,0,0,0,3,0},
								 {0,0,0,4,7,0,1,2,0},
								 {1,0,0,0,0,2,6,8,0},
								 {2,0,0,0,1,0,0,0,5}};

  Sudoku initial(A);
	std::list<Sudoku> L = {};
	L.push_front(initial);
	while(!L.empty()) {
		Sudoku t = L.front();
		L.pop_front();
		t.printSudoku();
	}
}
