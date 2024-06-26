#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

/* 
    ====================================     TASK     =====================================
    Task: Inside the for loop in the play_game function, use the two functions Get_Input() 
    and Get_Random_Opponent_Move() to establish a user move and a computer move as variables. 
    The output of the two functions will either be 'r' for rock, 'p' for paper or 's' 
    for scissors. Based on those variables decide who wins the game of rock, paper, scissors.

    For clarity, the rules are:
        1. Paper beats Rock
        2. Rock beats Scissors
        3. Scissors beats Paper
        4. If you pick the same move, then you tie
    =======================================================================================

    ==================================== HOW TO RUN ME ====================================
    How to run me:
        First, compile the program:
            g++ -o rps Rock_Paper_Scissors_Engine.cpp
        Next, run the program with the number of games to play:
            ./rps #runs
        For example, if you wanted to play 3 games:
            ./rps 3
    =======================================================================================
*/

//Gets a sample input from a user on the command line
//Returns: the char r,p,s depending on the user input
char Get_Input();

//Gets a random computer move 
//Returns: the char r,p,s depending on the computer move
char Get_Random_Opponent_Move();

//Play num_games of rock paper scissors
//Output: prints "You Win!", "You Lose!", "You Tie!" based on the outcome
void play_game(int num_games){
    
    for(int n = 0; n < num_games; n++){
        //Will be r,p,s depending on computer and player move
        char user_input = Get_Input();
        char computer_move = Get_Random_Opponent_Move();

        //TODO: decide who wins based on the user_input and computer_move variables

    }

}