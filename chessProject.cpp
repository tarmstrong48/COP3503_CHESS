#include "chessProject.h"

#include <iostream>
#include <string>

using namespace std;

chessBoard newBoard;

int main(){
	bool exit = false;
	int menuSelection;
	newBoard.getBoard();
	newBoard.setUpBoard();
	newBoard.getBoard();
	return 0;
}
