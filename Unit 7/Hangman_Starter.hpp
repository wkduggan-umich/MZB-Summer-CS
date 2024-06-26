#include <iostream>
#include <vector>
using namespace std;

/* 
    ====================================     TASK     =====================================
    Game: The goal is to make a working hangman game that will run in the command line. 
    The game will first prompt one player to enter a word(s) for the guesser. After doing 
    so, an empty board will be printed and the guesser will be asked to enter a character. 
    The guesser will be allowed to miss 7 letters before they lose. Additionally,
    their progress will be printed on the screen. Finally, after guessing the word or
    incorrectly guessing too many times, the guesser will be told if they won/lost.

    For those unfamiliar with the game of hangman, here is a link to the rules:
        https://www.wikihow.com/Play-Hangman

    Task: Your task is to implement critical functions for the hangman game and then to 
    call these functions inside the "hangman engine". There are 9 tasks outlined for you
    throughout this document. If your game works, then you've implemented these correctly!
    (i.e. no tests!)

    Tip: In order to more quickly find the tasks do command-F (mac) or control-F (windows)
    =======================================================================================

    ==================================== HOW TO RUN ME ====================================
    How to run me:
        First, compile the program:
            g++ -o hangman.exe Hangman.cpp
        Next, run the program:
            ./hangman.exe
    =======================================================================================
*/

//INPUT: the number of wrong guesses the player has made so far
//OUTPUT: prints the current hangman based on the number of wrong guesses to the command line
void print_hangman(int num_wrong_guesses);

//INPUT: The current guesses vector made by the player, the word to be guessed, and the wrong guesses
//OUTPUT: Prints the word progress and the wrong guesses to the command line
void print_current_progress(vector<char> guesses, vector<char> word, vector<char> wrong_guesses);

//OUTPUT: A vector of characters representing the word to be guessed from the command line
vector<char> get_input();

//INPUT: The current guesses vector by the player and the wrong guesses
//OUTPUT: The single character guess made by the player
char get_guess(vector<char> guesses, vector<char> wrong_guesses);

//TASK 1: Implement a function to check the guess made by the guesser
//INPUT: The character vector representing the word to be guessed and the player's guess
//OUTPUT: A boolean representing a correct guess (true/false for correct/incorrect)


//TASK 2: Implement a function to check if the game is done
//INPUT: The character vector representing the word to be guessed and the character vector 
//       representing the guesses made so far
//OUTPUT: A boolean representing if the game is done (true/false for done/not done)


//TASK 3: Implement a function to check if the game was won or lost
//INPUT: A boolean representing if the game was won or lost
//OUTPUT: Print to the command line a message telling the player if they won or lost


//TASK 4: Call the functions you wrote and the ones outline above on the specified lines 
//NOTE: The only lines you will need to edit are right below the specified tasks
//This function represents the overall command logic for the hangman game
void hangman(){

    //================================DO NOT EDIT================================
    //Get the word to be gussed
    vector<char> word = get_input();

    //Vector for keeping track of the progress
    vector<char> guesses;
    guesses.resize(word.size());

    //Vector for keeping track of the wrong gussses
    vector<char> wrong_guesses;

    //Number of wrong gussess
    int num_wrong_guesses = 0;

    //Keep track of win/lose
    bool won = false;

    //Print an empty board to show the empty spaces for the guessing player
    print_hangman(num_wrong_guesses);
    print_current_progress(guesses, word, wrong_guesses);

    //this game allows for 7 wrong guesses before you lose
    while(num_wrong_guesses < 7){
    //============================================================================
        
        //TASK 5: Call the get_guess function and store the player guess from the 
        //        command line in a character variable called 'guess'


        //TASK 6: Call the function you wrote to check the guess of the user and
        //        store it in a boolean variable called 'guess_is_wrong'


        //Update guesses/wrong_guesses to include the newly guessed word
        //================================DO NOT EDIT================================
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
        //===========================================================================

        //TASK 7: Call the function you wrote to check if the game is done and store
        //        the result in a boolean variable called 'done'
        

        //TASK 8: Call the print_hangman and print_current_progress function outline above
        //        to print the current hangman progress
        //TIP: For prettier printing always call print_hangman before print_current_progress
        print_hangman(num_wrong_guesses);
        print_current_progress(guesses, word, wrong_guesses);

        //================================DO NOT EDIT================================
        if(done){
            won = true;
            break;
        }
        //===========================================================================
    }

    //TASK 9: Call the function you wrote to print to the command line if the guesser
    //        won or lost
    
}
