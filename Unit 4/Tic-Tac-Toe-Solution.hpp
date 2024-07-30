#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;

void print_board(vector<vector<char> > &board){
    for(int r = 0; r < 3; ++r){
        for(int c = 0; c < 3; ++c){
            cout << board[r][c] << " ";
        }
        cout << "\n";
    }
}

char check_for_winner(vector<vector<char> > &board){
    //rows
    for(int r = 0; r < 3; ++r){
        if(board[r][0] != '-' && board[r][0] == board[r][1] && board[r][0] == board[r][2]){
            return board[r][0];
        }
    }

    //columns
    for(int c = 0; c < 3; ++c){
        if(board[0][c] != '-' && board[0][c] == board[1][c] && board[0][c] == board[2][c]){
            return board[0][c];
        }
    }

    //diagonals
    if(board[0][0] != '-' && board[0][0] == board[1][1] && board[0][0] == board[2][2]){
        return board[0][0];
    }

    if(board[0][2] != '-' && board[0][2] == board[1][1] && board[0][2] == board[2][0]){
        return board[0][2];
    }

    return 'N';
}
