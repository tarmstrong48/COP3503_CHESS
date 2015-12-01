#ifndef CHESS_H
#define CHESS_H

#include <iostream>
#include <string>

using namespace std;


class piece{
	
    private:
        string nameOfPiece;
        int row;
		int column;
		bool specialMove;
		bool pawn;
        
    public:	
        piece(string name){
            nameOfPiece = name;
            if (name == "pawn"){
				specialMove = true;
				pawn = true;
			}	
        }
        
        void setPiece(int i, int j){
            row = i;
            column = j;
		}
		
		void movePiece(int i, int j){
			if (pawn = true){
				if (i < row - 1 && i > row + 1){
					return;
				}
				if (j != column){
					return;
				}
			}
			
		}
		
		int getRow(){
			return row;
		}
		
		int getColumn(){
			return column;
		}		
		
		string getName(){
			return nameOfPiece;
		}
};

class chessBoard{
    private:
		string board [8] [8];

    public:
        chessBoard(){
            for (int row = 0; row < 8; row++){
                for (int column = 0; column < 8; column++){
                    board [row] [column] = "SPACE";
                }
            }
        }
        
        void setPieceOnBoard(piece &thePiece){
			int row = thePiece.getRow();
			int column = thePiece.getColumn();
			string name = thePiece.getName();
			board [row] [column] = name;
		}

        void getBoard(){
            for (int i = 0; i < 8; i++){
                for (int j = 0; j < 8; j++){
                    cout << board [i] [j] << "\t";
                }
                cout << "\n\n\n";
            }
        }

        string getBoardPiece(int row, int column){
            return board [row] [column];
        }


  /*      void movePiece(int i, int j, int k, int l){
            board [k] [l] = board [i] [j];
            board [i] [j] = "SPACE";
        };
        
        void movePiece(int row, int column){
			string pieceName = board [row] [column];
			if (pieceName == "pawn"){
				
			}
		};
		 
		*/
};


/*    public:
        checkPiece(int row, int column){
            if (board [row] [column] == "pawn"){

            }
        };
};*/

/*
class pawnPiece: public chessBoard{
    private:
        string pawn;

    public:
        pawnPiece(chessBoard &setNewBoard, int row, int column){
            setNewBoard.setBoardPiece("pawn", row, column);
        };

        void movePawn(){

        };
};*/

#endif
