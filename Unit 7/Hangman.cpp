/* 
    =======================================================================================
                                HANGMAN ENGINE DO NOT EDIT!
    =======================================================================================
*/

#include "Hangman_Starter.hpp"

int main(){
    hangman();
}

void print_hangman(int num_wrong_guesses){
    cout << "________________\n";
    cout << "    |         | \n";
    cout << "    |         | \n";
    if(num_wrong_guesses >= 1){
        cout << "    |         O \n";
    } else {
        cout << "    |           \n";
    }
    if(num_wrong_guesses >= 4){
        cout << "    |        \\|/\n";
    } else if(num_wrong_guesses >= 3){
        cout << "    |        \\| \n";
    } else if(num_wrong_guesses >= 2){
        cout << "    |         | \n";
    } else {
        cout << "    |           \n";
    }
    if(num_wrong_guesses >= 5){
        cout << "    |         | \n";
    } else {
        cout << "    |           \n";
    }
    if(num_wrong_guesses >= 7){
        cout << "    |        / \\\n";
    } else if(num_wrong_guesses >= 6){
        cout << "    |        /  \n";
    } else {
        cout << "    |           \n";
    }
    cout << "    |           \n";
    cout << "    |           \n";
    cout << "---------       \t\t";
}

void print_current_progress(vector<char> guesses, vector<char> word, vector<char> wrong_guesses){
    for(int i = 0; i < word.size(); ++i){
        if(word[i] == ' '){
            cout << "  ";
        } else {
            if(tolower(guesses[i]) == tolower(word[i])){
            cout << (char)toupper(word[i]) << " ";
            } else {
                cout << "_ ";
            }
        }
    }
    if(wrong_guesses.size() > 0){
        cout << "\n\nWrong Guesses: ";
        for(int i = 0; i < wrong_guesses.size(); ++i){
            cout << (char)toupper(wrong_guesses[i]) << " ";
        }
    }
    cout << "\n\n\n";
}

vector<char> get_input(){
    string input;
    cout << "Type in your word(s) then hit the enter key. Make sure to hide this from the other player.\n\nYour Word: ";
    getline(cin, input);
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    vector<char> input_char;
    for(int i = 0; i < input.length(); ++i){
        input_char.push_back(input[i]);
    }
    return input_char;
}

char get_guess(vector<char> guesses, vector<char> wrong_guesses){
    char guess;
    cout << "Type in a single character guess: ";
    while(true){
        bool done = true;
        cin >> guess;
        for(int i = 0; i < guesses.size(); ++i){
            if(tolower(guesses[i]) == tolower(guess)){
                cout << "\nAlready guessed. Enter a new character: ";
                done = false;
                break;
            }
        }
        if(done){
            for(int i = 0; i < wrong_guesses.size(); ++i){
                if(tolower(wrong_guesses[i]) == tolower(guess)){
                    cout << "\nAlready guessed. Enter a new character: ";
                    done = false;
                }
            }
        }
        if(done) {
            cout << "\n\n";
            return guess;
        }
    }
        
}