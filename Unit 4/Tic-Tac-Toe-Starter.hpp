#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;

/* 
    ====================================     TASK     =====================================
    Task: Implement two tic-tac-toe functions:
        1. First, implement the print_board function. This function takes in the current
           board and prints a 3x3 board.
           
            For example, if the current board vector is:
                 {{'-','X','O'},{'X','-','-'},{'-','-','O'}}
            Then, the print_board function should print:
                - X O
                X - -
                - - O
            Note, there is a space between every character and each row is on a new line.

        2. Next, implement the check_winner function to see if there is a winner based on 
           the current board. Do this by checking if there is three consecutive chars in 
           any of the rows, columns, or diagonals. It will output 'X','O','N', representing
           X wins, O wins, or no current winner.

            For example, if the current board is:
                - X O
                X - -
                - - O
            Then, check_winner should return 'N'.

            But if the input is:
                - X O
                X X O
                - - O
            Then, check_winner should return 'O'.
    =======================================================================================

    ==================================== HOW TO RUN ME ====================================
    How to run me:
        First, compile the program:
            g++ -o Tic-Tac-Toe Tic-Tac-Toe-Engine.cpp
        Next, run the program, inputting the number of games to play:
            ./Tic-Tac-Toe #games
        For example, if you wanted to play three games:
            ./Tic-Tac-Toe 3
    =======================================================================================
*/

//Input:  The current 3x3 board
//Output: Prints the current tic-tac-toe board
void print_board(vector<vector<char> > &board){
    //TODO: implement the print_board function
    for(int row = 0; row < board.size(); ++row){
        for(int column = 0; column < board[0].size(); ++column){
            cout << board[row][column] << " ";
        }
        cout << "\n";
    }
}

//Input: The current 3x3 board
//Output: A char representing the winner (X/O) or N for no winner yet
//Note: You should check all possible winning combinations to determine if the current board has a winner
char check_for_winner(vector<vector<char> > &board){
    //TODO: implement the check_for_winner function
    
}