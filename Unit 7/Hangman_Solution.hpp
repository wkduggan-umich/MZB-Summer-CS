#include <iostream>
#include <vector>
using namespace std;

void print_hangman(int num_wrong_guesses);

void print_current_progress(vector<char> guesses, vector<char> word, vector<char> wrong_guesses);

vector<char> get_input();

char get_guess(vector<char> guesses, vector<char> wrong_guesses);

bool check_guess(vector<char> word, char guess){
    for(int i = 0; i < word.size(); ++i){
        if(tolower(word[i]) == tolower(guess)){
            return false;
        }
    }
    return true;
}

bool game_is_done(vector<char> word, vector<char> guesses){
    for(int i = 0; i < word.size(); ++i){
        if(tolower(word[i]) != tolower(guesses[i]) && word[i] != ' '){
            return false;
        }
    }
    return true;
}

void print_result(bool won){
    if(won) cout << "You win!\n\n\n";
    else cout << "You lose!\n\n\n";
}

void hangman(){
    //Get the word to be gussed
    vector<char> word = get_input();

    //vector for keeping track of the progress
    vector<char> guesses;
    guesses.resize(word.size());

    //vector for keeping track of the wrong gussses
    vector<char> wrong_guesses;

    //number of wrong gussess
    int num_wrong_guesses = 0;

    //keep track of win/lose
    bool won = false;

    //print an empty board to show the empty spaces
    print_hangman(num_wrong_guesses);
    print_current_progress(guesses, word, wrong_guesses);

    //this game allows for 7 wrong guesses before you lose
    while(num_wrong_guesses < 7){
        //get the gusses from input
        char guess = get_guess(guesses, wrong_guesses);

        bool guess_is_wrong = check_guess(word, guess);

        //update guesses/wrong_guesses to include the newly guessed word
        if(guess_is_wrong){
            ++num_wrong_guesses;
            wrong_guesses.push_back(guess);
        } else {
            for(int i = 0; i < word.size(); ++i){
                if(tolower(word[i]) == tolower(guess)){
                    guesses[i] = guess;
                }
            }
        }

        //again maybe have them check if game is done in a function
        bool done = game_is_done(word, guesses);
        

        //print the current progress
        print_hangman(num_wrong_guesses);
        print_current_progress(guesses, word, wrong_guesses);

        if(done){
            won = true;
            break;
        }
    }

    //if the player reached this point, they lost

    print_result(won);
    
}
