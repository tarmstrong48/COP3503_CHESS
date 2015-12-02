#include "chessProject.h"

#include <iostream>
#include <string>

using namespace std;

chessBoard newBoard;

int main(){
	bool exit = false;
	int menuSelection;
	
	while (exit != true){
		cout << "MAIN MENU" << endl;
		cout << "Please select an option (1 - ). Type 0 for exit. Choice: " << endl;
		cout << "1: A game of chess" << endl;
		cin >> menuSelection;
		if (menuSelection == 0){
			exit = true;
		}
		else if (menuSelection == 1){
			
		}
		else{
			cout << "Please enter a valid choice. Try again." << endl;
		}
	}
	newBoard.getBoard();
	newBoard.setUpBoard();
	newBoard.getBoard();
	return 0;
}
