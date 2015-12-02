#include "chessProject.h"

#include <iostream>
#include <string>

using namespace std;

int main(){
	bool exit = false;
	int menuSelection;
	string playerOneName;
	string playerTwoName;
	
	while (exit != true){
		cout << "MAIN MENU" << endl;
		cout << "Please select an option (1 - ). Type 0 for exit. Choice: " << endl;
		cout << "1: A game of chess" << endl;
		cin >> menuSelection;
		if (menuSelection == 0){
			exit = true;
		}
		else if (menuSelection == 1){
			bool gameFinished = false;
			chessBoard newBoard;
			newBoard.getBoard();
			cout << endl;
			cout << "Enter player one's name: ";
			cin >> playerOneName;
			cout << endl;
			cout << "Enter player two's name: ";
			cin >> playerTwoName;
			cout << endl;
			
			cout << "START!" << endl;
			newBoard.setUpBoard();
			cout << "Please enter which piece you would like to move by coordinates." << endl;
			cout << "Example: \"Move piece \" 1 A \" to \"1 B\"." << endl;

			while (gameFinished != true){
				cout << "";
			}
			
			
			newBoard.getBoard();
		}
		else{
			cout << "Please enter a valid choice. Try again." << endl;
		}
	}
	
	return 0;
}
