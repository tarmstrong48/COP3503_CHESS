#ifndef CHESSPROJECT_H
#define CHESSPROJECT_H

#include <iostream>
#include <string>

using namespace std;

class chessBoard{
    private:
		string board [9] [9];

    public:
        chessBoard(){
			for (int row = 1; row < 9; row++){
				for (int column = 0; column < 1; column++){					
					string rowNumbers[8] = {"1", "2", "3", "4", "5", "6", "7", "8"};
					board [row] [column] = rowNumbers[row - 1];
				}
			}
			for (int column = 1; column < 9; column++){
				for (int row = 0; row < 1; row++){					
					string columnLetters[8] = {"A", "B", "C", "D", "E", "F", "G", "H"};
					board [row] [column] = columnLetters[column - 1];
				}
			}
            for (int row = 1; row < 9; row++){
                for (int column = 1; column < 9; column++){
                    board [row] [column] = "SPACE";
                }
            }
        }
        
        void setUpBoard(){
			for (int column = 1; column < 9 ; column++){
				string playerOnePieces[8] = {"R1", "KN1", "B1", "Q1", "K1", "B1", "KN1", "R1"};
				board [1] [column] = playerOnePieces[column - 1];
			}
			for (int column = 1; column < 9 ; column++){
				string playerOnePieces[8] = {"P1", "P1", "P1", "P1", "P1", "P1", "P1", "P1"};
				board [2] [column] = playerOnePieces[column - 1];
			}
			for (int column = 1; column < 9 ; column++){
				string playerTwoPieces[8] = {"P2", "P2", "P2", "P2", "P2", "P2", "P2", "P2"};
				board [7] [column] = playerTwoPieces[column - 1];
			}
			for (int column = 1; column < 9 ; column++){
				string playerTwoPieces[8] = {"R2", "KN2", "B2", "Q2", "K2", "B2", "KN2", "R2"};
				board [8] [column] = playerTwoPieces[column - 1];
			}
		}
		

        void getBoard(){
            for (int i = 0; i < 9; i++){
                for (int j = 0; j < 9; j++){
                    cout << board [i] [j] << "\t";
                }
                cout << "\n\n\n";
            }
        }

        string getBoardPiece(int row, int column){
            return board [row] [column];
        }
		
		//Only if checkmate doesn't work, this code will be there
		bool checkForKingOne(){
			for (int i = 1; i < 9; i++){
				for (int j = 1; j < 8; j++){
					if (board [i] [j] == "K1"){
						return true;
					}
					else{
						return false;
					}
				}
			}
		}
		
		//Only if checkmate doesn't work, this code will be there
		bool checkForKingTwo(){
			for (int i = 1; i < 9; i++){
				for (int j = 1; j < 8; j++){
					if (board [i] [j] == "K1"){
						return true;
					}
					else{
						return false;
					}
				}
			}
		}
		
		void movePiece(int rowPre, int columnPre, int rowAfter, int columnAfter){
			if (this -> legalityOfMove(rowPre, columnPre, rowAfter, columnAfter) == true){
				board [rowAfter] [columnAfter] = board [rowPre] [columnPre];
				board [rowPre] [columnPre] = "SPACE";
			}
		}
		
		bool legalityOfMove(int rowPre, int columnPre, int rowAfter, int columnAfter){
			//Check to see if own piece is at the after point
			if (
			if (board [row] [column] == "P1"){
				this -> pawnConstraintsP1(rowPre, columnPre, rowAfter, columnAfter);
			}
			return true;
			return false;
		}
		
		bool isPieceThere(int rowPre, int columnPre){
			
		}
		
		bool inputOutOfBounds(int rowPre, int columnPre){
			if (rowPre < 1 || columnPre < 1 || rowPre > 8 || columnPre > 8){
				cout << "Input out of bounds" << endl;
				return true;
			}
			return false;
		}
		
		bool outputOutOfBounds(int rowAfter, int columnAfter){
			if (rowAfter < 1 || columnAfter < 1|| rowAfter > 8 || columnAfter > 8
		}
		
		bool pawnConstraintsP1(int rowPre, int columnPre, int rowAfter, int columnAfter){
			if (
		}

		void check(){
			
		}

		void checkMate(){
			
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


#endif
