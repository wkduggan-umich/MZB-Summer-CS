#include <iostream>
#include <vector>
using namespace std;

/* 
    ====================================     TASK     =====================================
    Goal: Your task is to implement a library. The library will contain books. Each book
    will have an author. 
    
    The author will be implemented as a struct. An author has three traits: a name, a 
    boolean representing if the author is alive, and an integer age. Make sure to call
    these variables exactly "name", "age", and "alive".
    
    A book has four traits: a title, an author, an integer representing the number of copies
    currently in the library, and the number of copies currently on loan. These variables
    should be private, meaning you need to create get and set functions for each variable!
    A book also has the functionality to be loaned and returned. This should 
    increase/decrease the number of books in the library and on loan for the respective 
    function. Finally, there is a function to print the book. This has been implemented 
    for you. Make sure to place it inside the book class. The book class should also have
    two constructors. The first is the default (no arguments) and is given to you. The 
    second is to be implemented by you. It should take three arguments: the book title,
    the author, and the total number of copies. Intially, there should be no books on loan
    and all books should be in the library. Note, all functions should be public. Since
    the starter code relies on these functions, make sure to name them as follows:

        1. get_title() -> returns the Book's title
        2. get_author -> returns the Book's author
        3. loan_book() -> changes the number of copies loand and number of copies in the library
        4. return_book() -> changes the number of copies loand and number of copies in the library
        5. get_number_loaned() -> returns the number of Books currently loaned out by the library
        6. get_number_in_library() -> returns the number of Books currently in the library
        7. get_total_number_copies() -> returns the total number of Books (both in library and loaned)

    Feel free to implement more functions than these that you feel nessecary. However, 
    you must implement at least these outlines functions.

    Finally, you will implement some functionalities in the Library class. First, you
    should allow the library to hold books. This will be done by storing a vector of Book
    objects. Next, create a constructor for the Library class that will intialize the 
    Books and the library's name. Finally, there are functions to implement: Loan_Book,
    Return_Book, and Print_Books_Info_By_Author. Each of these functions are outlined below.
    These functions all print to the output file and will require exact string formatting
    so carefully look over the description and examples.

    Remember, you can easily find your tasks by doing Command-F (Mac) or Ctrl-F (Windows)
    and typing in "TODO".
    =======================================================================================

    ==================================== HOW TO RUN ME ====================================
    How to run me:
        First, compile the program:
            g++ -o library Library_Tests.cpp
        Next, run the small test: (the output will be placed in output.txt)
            ./library s > output.txt
        Check if the test passed by doing:
            diff Small_Test_Solution.txt output.txt
        If you see no output, it passed! 
        If not, run this to see which lines were different:
            sdiff Small_Test_Solution.txt output.txt
        Once you've passed the small test, try the big test with the similar commands.
            g++ -o library Library_Tests.cpp
            ./library l > output.txt
            diff Large_Test_Solution.txt output.txt
            sdiff Large_Test_Solution.txt output.txt
        Once this is passing, run the test to check all to be sure
            g++ -o library Library_Tests.cpp
            ./library a > output.txt
            diff Test_Solution.txt output.txt
            sdiff Test_Solution.txt output.txt
        If this passes, then it works!
    =======================================================================================
*/

//TODO: implement the author struct with the variables outlined above

//TODO: implement the book class with the variables and functions outlined above

//Place the default constructor inside the book class
//Initializes the book with default values
Book(){
    title = "";
    author.name = "";
    author.age = 0;
    author.alive = false;
    num_copies_loaned = 0;
    num_copies_in_library = 0;
}

//Place the print_book function inside the book class
//Output: prints the book information to output
void Print_Book(){
    cout << "\"" << title << "\" by " << author.name;
    if(!author.alive){
        cout << " (D)";
    } else {
        cout << " (" << author.age << ")";
    }
}

class Library{
    private:
        //TODO: Create a vector of Book objects called "Books"
        string name;

    public:
        //Default constructor that only takes in a name and creates a empty Books vector
        Library(string _Name){
            name = _Name;
            Books = vector<Book>();
        }

        //TODO: Create a constructor that takes in a vector of Book objects and a string name
        //      and set the class's Books and name object to have these values

        
        /*
        Input: The title of the book to be loaned as a string. This book is gaurenteed 
               to exist in the library but could have no copies remaining to be loaned.
        Effects: Changes the number of copies of a book that are in the library and out on loan.
                 If there are no copies that can be loaned, then don't change these values.
        Output: Prints a line showing information about the book that was loaned. If the book
                has no copies to be loaned, print a line showing that. The lines should be 
                formatted as follows:
            Example 1: Inside the context of the "New York Public Library", 
                       if the user inputs "The Cat in the Hat" and there are 1 copy currently on loan 
                       and 2 in the library beforehand, the function should print:
            Output 1: "The Cat in the Hat" by Dr. Seuss (D) was loaned out. There are 1 (of 3 total) copies in New York Public Library.\n
            Example 2: Inside the context of the "New York Public Library", 
                       if the user inputs "The Cat in the Hat" and there are 3 copies currently on loan 
                       and 0 in the library beforehand, the function should print:
            Output 2: There are no copies of "The Cat in the Hat" by Dr. Seuss (D) to be loaned at New York Public Library.\n
        Hint: Use the Print_Book function implemented above
        */
        void Loan_Book(string Book_Title){
            //TODO: Implement the Return_Book function 
        }

        /*
        Input: The title of the book to be returned as a string. This book is gaurenteed 
               to exist in the library but could have have no copies out on loan.
        Effects: Changes the number of copies of a book that are in the library and out on loan.
                 If there are no copies that can be returned, then don't change these values.
        Output: Prints a line showing information about the book that was returned. If the book
                has no copies to be returned, print a line showing that. The lines should be 
                formatted as follows:
            Example 1: Inside the context of the "New York Public Library", 
                       if the user inputs "Cat in the Hat" and there are 1 copy currently on loan 
                       and 2 in the library beforehand, the function should print:
            Output 1: "The Cat in the Hat" by Dr. Seuss (D) was returned. There are now 3 copies in New York Public Library of the 3 total copies.\n
            Example 2: Inside the context of the "New York Public Library", 
                       if the user inputs "Cat in the Hat" and there are 0 copies currently on loan 
                       and 3 in the library beforehand, the function should print:
            Output 2: There are no copies of "The Cat in the Hat" by Dr. Seuss (D) currently on loan at New York Public Library.
        Hint: Use the Print_Book function implemented above
        */
        void Return_Book(string Book_Title){
            //TODO: Implement the Return_Book function 
        }

        /*
        Input: The name of the author as a string. This author will have at least one book
               in the library.
        Output: Prints a line saying the number of books that the author has in the library. 
                Then calls the Print_Book_Library_Info function (implemented below) on 
                every book written by the specified author. 
            Example: Given the New York Public Library has 2 books by Dr. Seuss: "The Cat in the Hat" and 
            "One Fish, Two Fish, Red Fish, Blue Fish" (each with 2 copies in the library). 
            Then the function would print:
            Output: 
                New York Public Library has a total of 2 books by Dr. Seuss!\n
                2 total copies of "The Cat in the Hat" by Dr. Seuss (D). Of these, 2 are currently in the New York Public Library.\n
                2 total copies of "One Fish, Two Fish, Red Fish, Blue Fish" by Dr. Seuss (D). Of these, 2 are currently in the New York Public Library.\n
        */
        void Print_Books_Info_By_Author(string author_name){
            //TODO: Implement the Print_Books_Info_By_Author function
        }

        /* 
            =======================================================================================
                                            
                                            DO NOT EDIT BELOW!

            =======================================================================================
        */

        //Input: A Book's title (string) to be printed
        //Output: Prints information about the specified book
        void Print_Book_Library_Info(string Book_Title){
            Book cur_book;
            for(int i = 0; i < Books.size(); ++i){
                if(Book_Title == Books[i].get_title()){
                    cur_book = Books[i];
                    break;
                }
            }
            cout << "\t" << cur_book.get_total_number_copies() << " total copies of ";
            cur_book.Print_Book();
            cout << ". " << "Of these, " << cur_book.get_number_in_library() << " are currently in the " << name << ".\n";
        }

        //Input: A Book object to be added to the library
        //Effects: Adds the book to the Books vector
        //Output: Prints that the book was added to the library
        void Add_New_Book(Book new_book){
            Books.push_back(new_book);
            new_book.Print_Book();
            cout << " was added to " << name << ".\n";
        }

        //Output: Prints information about every book in the library
        void Print_Library(){
            cout << name << " has a total of " << Books.size() << " different books!\n";
            for(int i = 0; i < Books.size(); ++i){
                Print_Book_Library_Info(Books[i].get_title());
            }
        }
};