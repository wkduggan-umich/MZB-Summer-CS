/* 
    =======================================================================================
                                TIC-TAC-TOE-ENGINE DO NOT EDIT!
    =======================================================================================
*/
#include "Tic-Tac-Toe-Starter.hpp"

//Input: The current 3x3 board
//Output: A row, column vector representing the users selected move
vector<int> get_move(vector<vector<char> > &board){
    vector<int> move;
    int row;
    int column;
    while(true){
        cout << "Please Enter the row you would like to choose: \n";
        cin >> row;
        if(row < 1 || row > 3){
            cout << "Invalid row. Please enter a row between 1-3.\n";
            continue;
        }
        cout << "Please Enter the column you would like to choose: \n";
        cin >> column;
        if(column < 1 || column > 3){
            cout << "Invalid row. Please enter a column between 1-3.\n\n";
            continue;
        }
        if(board[row - 1][column - 1] == '-'){
            break;
        }
        cout << "This position has been taken. Please try again with a valid input.\n";
    }
    move.push_back(row - 1);
    move.push_back(column - 1);
    return move;
}

//Input: The current game number
//Output: print the games as the player progresses through it
void play_game(int game_number){
    char player1 = 'X';
    char player2 = 'O';
    vector<vector<char> > board;

    for(int r = 0; r < 3; ++r){
        vector<char> row;
        for(int c = 0; c < 3; ++c){
            row.push_back('-');
        }
        board.push_back(row);
    }
    
    char current_player;
    if(game_number % 2 == 0){
        current_player = player1;
    } else {
        current_player = player2;
    }

    int count = 0;

    while(count < 9){
        print_board(board);

        cout << "Currently player " << current_player << "'s move\n";

        vector<int> player_move = get_move(board);

        board[player_move[0]][player_move[1]] = current_player;

        char winner = check_for_winner(board);

        if(winner != 'N'){
            print_board(board);
            cout << "Player " << winner << " wins!\n"; 
            exit(0);
        }

        if(current_player == player1){
            current_player = player2;
        } else {
            current_player = player1;
        }
        ++count;
    }
    print_board(board);
    cout << "Tie!\n";
}

//Main will take in a number of games to play and run the corresponding number
int main(int argc, char** argv){
    if(argc != 2){
        cerr << "Please enter a number of games to play!\n";
        exit(1);
    }
    int num_games = atoi(argv[1]);
    for(int i = 0; i < num_games; ++i){
        cout << "Game: " << i << "\n";
        play_game(i);
    }
}