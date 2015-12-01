#include "chess.h"
#include <iostream>
#include <string>

using namespace std;

chessBoard newBoard;


int main(){
    int choice;
    bool exit = false;
    //There's going to be a menu
    cout << "MAIN MENU: " << "\n\n";
    cout << "Please select an option (1 - ): " << endl;
    cin >> choice;

    while(exit != true){
        if (choice == 1){
            newBoard.getBoard();
        }
        int i = 0;
        int j = 0;
        piece newPawn1("pawn1");
        newPawn1.setPiece(0,0);
        newBoard.setPieceOnBoard(newPawn1);

        cin >> choice;
        if (choice == 2){
            newBoard.getBoard();
        /*    int i = 0;
            int j = 0;
            int k = 0;
            int l = 0;
            cin >> i >> j >> k >> l;
            newBoard.movePiece(i,j,k,l);
            newBoard.getBoard(); */

        }
        else{
            exit = true;
        }
    }
    return 0;
}
