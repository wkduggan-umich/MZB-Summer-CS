#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//Gets a sample input from a user on the command line
//Returns: the char r,p,s depending on the user input
char Get_Input();

//Gets a random computer move 
//Returns: the char r,p,s depending on the computer move
char Get_Random_Opponent_Move();

void play_game(int num_games){
    
    for(int n = 0; n < num_games; n++){

        char user_input = Get_Input();
        char computer_move = Get_Random_Opponent_Move();

        if(user_input == 'r' && computer_move == 'r'){

            cout << "You Tie!\n\n";

        } else if(user_input == 'r' && computer_move == 's'){

            cout << "You Win!\n\n";

        } else if(user_input == 'r' && computer_move == 'p'){

            cout << "You Lose!\n\n";

        } else if(user_input == 's' && computer_move == 'r'){

            cout << "You Lose!\n\n";

        } else if(user_input == 's' && computer_move == 's'){

            cout << "You Tie!\n\n";

        } else if(user_input == 's' && computer_move == 'p'){

            cout << "You Win!\n\n";

        } else if(user_input == 'p' && computer_move == 'r'){

            cout << "You Win!\n\n";

        } else if(user_input == 'p' && computer_move == 's'){

            cout << "You Lose!\n\n";

        } else if(user_input == 'p' && computer_move == 'p'){

            cout << "You Tie!\n\n";

        } 

    }

}
