/* 
    =======================================================================================
                            ROCK PAPER SCISSORS ENGINE. DO NOT EDIT!
    =======================================================================================
*/
#include "Rock_Paper_Scissors_Starter.hpp"

//Gets a sample input from a user on the command line
//Returns: the char r,p,s depending on the user input
char Get_Input(){
    string move;
    cout << "To make a move please type in r (Rock), p (Paper), s (Scissors) followed by the enter key\n";
    cin >> move;
    int count = 0;
    while(move != "r" && move != "p" && move != "s"){
        cout << "Invalid Move: Please Try Again\n";
        cin >> move;
        ++count;
        if(count >= 5){
            cout << "Too many invalid moves. Program exiting...\n";
            exit(1);
        }
    }
    switch(move[0])
    {
        case 'r':
            cout << "You selected Rock\n";
            break;
        case 's':
            cout << "You selected Scissors\n";
            break;
        case 'p':
            cout << "You selected Paper\n";
            break;
        default:
            cout << "Error getting player move. Program exiting...\n";
            exit(1);
            break;
    }
    return move[0];
}

//Gets a random computer move 
//Returns: the char r,p,s depending on the computer move
char Get_Random_Opponent_Move(){

    srand(time(0));

    int random = rand() % 3;

    switch(random)
    {
        case 0:
            cout << "Opponent selects Rock\n";
            return 'r';
        case 1:
            cout << "Opponent selects Scissors\n";
            return 's';
        case 2:
            cout << "Opponent selects Paper\n";
            return 'p';
        default:
            cout << "Error getting random move. Program exiting...\n";
            exit(1);
    }

    return ' ';
}

//Main will take in the number of games and then run based on that input
int main(int argc, char** argv){
    if(argc < 2){
        cout << "You must include a number for the number of games you want to play\n";
        exit(1);
    } 

    int num_games = atoi(argv[1]);

    play_game(num_games);
}