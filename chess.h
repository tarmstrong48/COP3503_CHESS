#ifndef CHESS_H
#define CHESS_H

#include <iostream>
#include <string>

using namespace std;

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
        };

        void getBoard(){
            for (int i = 0; i < 8; i++){
                for (int j = 0; j < 8; j++){
                    cout << board[i][j] << "\t";
                }
                cout << "\n\n\n";
            }
        };

        string getBoardPiece(int row, int column){
            return board [row] [column];
        };

        void setBoardPiece(string name, int row, int column){
            board [row] [column] = name;
        };

        void movePiece(int i, int j, int k, int l){
            board [k][l] = board [i] [j];
            board [i] [j] = "SPACE";
        };
};

class piece: public chessBoard{
    private:
        string nameOfPiece;
    public:
        piece(chessBoard &newBoard, string name, int row, int column){
            nameOfPiece = name;
            newBoard.setBoardPiece(nameOfPiece, row, column);
        };
        
        void move(){};
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
