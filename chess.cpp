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
        piece newPawn1(newBoard,"pawn",i,j++);
        piece newPawn2(newBoard,"pawn",i,j++);
        piece newPawn3(newBoard,"pawn",i,j++);
        piece newPawn4(newBoard,"pawn",i,j++);
        piece newPawn5(newBoard,"pawn",i,j++);
        piece newPawn6(newBoard,"pawn",i,j++);
        piece newPawn7(newBoard,"pawn",i,j++);
        piece newPawn8(newBoard,"pawn",i,j++);

        cin >> choice;
        if (choice == 2){
            newBoard.getBoard();
            int i = 0;
            int j = 0;
            int k = 0;
            int l = 0;
            cout<< "Enter desired piece coordinates: ";
            cin >> i >> j;
            cout<< "Enter desired destination coordinates: ";
            cin >> k >> l;
            newBoard.movePiece(i,j,k,l);
            newBoard.getBoard();

        }
        else{
            exit = true;
        }
    }
    return 0;
}
