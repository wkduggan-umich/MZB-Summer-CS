/* 
    =======================================================================================
                                  LIBRARY TESTS DO NOT EDIT!
    =======================================================================================
*/

#include "Library_Starter.hpp"

void test_small();

void test_large();

int main(int argc, char** argv){
    if(argc != 2){
        cerr << "Must provide the test size to be run. Exiting...\n";
        exit(1);
    } 
    if(argv[1][0] == 's'){
        test_small();
    } else if(argv[1][0] == 'l'){
        test_large();
    } else if(argv[1][0] == 'a'){
        test_small();
        test_large();
    } else {
        cerr << "Must provide s (small), m (medium), l (large), or a (all) as input. Exiting...\n";
        exit(1);
    }
}


void test_small(){
    cout << "-------------------------------------------------------------------------------------------------------------------\n";
    cout << "                                                     SMALL TEST\n";
    cout << "-------------------------------------------------------------------------------------------------------------------\n";

    Library library_one("Chicago Public Libray");

    Author maurice;

    maurice.name = "Maurice Sendak";

    maurice.alive = false;

    maurice.age = 83;

    library_one.Add_New_Book(Book("Where the Wild Things Are", maurice, 4));

    library_one.Loan_Book("Where the Wild Things Are");

    library_one.Add_New_Book(Book("In the Night Kithcen", maurice, 6));

    library_one.Return_Book("Where the Wild Things Are");

    library_one.Print_Library();

    library_one.Print_Book_Library_Info("Where the Wild Things Are");

    library_one.Print_Books_Info_By_Author(maurice.name);
}

void test_large(){
    cout << "-------------------------------------------------------------------------------------------------------------------\n";
    cout << "                                                     LARGE TEST\n";
    cout << "-------------------------------------------------------------------------------------------------------------------\n";

    //Create authors
    Author Seuss;
    Seuss.name = "Dr. Seuss";
    Seuss.age = 87;
    Seuss.alive = false;

    Author Carle;
    Carle.name = "Eric Carle";
    Carle.age = 91;
    Carle.alive = false;

    Author Brown;
    Brown.name = "Margaret Wise Brown";
    Brown.age = 42;
    Brown.alive = false;

    Author White;
    White.name = "E.B. White";
    White.age = 86;
    White.alive = false;

    Author Lobel;
    Lobel.name = "Arnold Lobel";
    Lobel.age = 54;
    Lobel.alive = false;

    Author Yolen;
    Yolen.name = "Jane Yolen";
    Yolen.age = 85;
    Yolen.alive = true;

    Author Rowling;
    Rowling.name = "J.K. Rowling";
    Rowling.age = 58;
    Rowling.alive = true;

    //Create books
    vector<Book> Books;
    Books.push_back(Book("The Cat in the Hat",Seuss,5));
    Books.push_back(Book("Green Eggs and Ham",Seuss,3));
    Books.push_back(Book("How the Grinch Stole Christmas!",Seuss,10));
    Books.push_back(Book("The Lorax",Seuss,1));
    Books.push_back(Book("One Fish, Two Fish, Red Fish, Blue Fish",Seuss,7));
    Books.push_back(Book("Oh, the Places You'll Go!",Seuss,2));
    Books.push_back(Book("Horton Hears a Who!",Seuss,4));
    Books.push_back(Book("The Sneetches!",Seuss,8));
    Books.push_back(Book("Fox in Socks",Seuss,5));
    Books.push_back(Book("Hop on Pop",Seuss,4));
    Books.push_back(Book("Dr. Seuss's ABC!",Seuss,4));

    Books.push_back(Book("The Very Hungry Caterpillar",Carle,6));
    Books.push_back(Book("Brown Bear, Brown Bear, What Do You See?",Carle,2));
    Books.push_back(Book("From Head to Toe",Carle,9));
    Books.push_back(Book("The Tiny Seed",Carle,7));
    Books.push_back(Book("The Grouchy Lady Bug",Carle,3));
    Books.push_back(Book("Little Cloud",Carle,2));
    Books.push_back(Book("Mister Seahorse",Carle,4));

    Books.push_back(Book("Goodnight Moon",Brown,7));
    Books.push_back(Book("The Runaway Bunny",Brown,2));
    Books.push_back(Book("The Important Book",Brown,4));
    Books.push_back(Book("Big Red Barn Big Book",Brown,6));
    Books.push_back(Book("My World",Brown,6));
    Books.push_back(Book("Home for a Bunny",Brown,5));
    Books.push_back(Book("The Little Island",Brown,1));
    Books.push_back(Book("The Sailor Dog",Brown,1));

    Books.push_back(Book("Charlotte's Web",White,10));
    Books.push_back(Book("The Trumpet of the Swan",White,1));
    Books.push_back(Book("Once More to the Lake",White,1));

    Books.push_back(Book("Frog and Toad are Friends",Lobel,2));
    Books.push_back(Book("Frog and Toad Together",Lobel,7));
    Books.push_back(Book("Frog and Toad All Year",Lobel,3));
    Books.push_back(Book("Days with Frog and Toad",Lobel,4));
    Books.push_back(Book("Owl at Home",Lobel,5));
    Books.push_back(Book("Mouse Soup",Lobel,7));
    Books.push_back(Book("Mouse Tales",Lobel,8));

    Books.push_back(Book("Owl Moon",Yolen,5));
    Books.push_back(Book("How do Dinosaurs Say Goodnight?",Yolen,4));
    Books.push_back(Book("How do Dinosaurs go to School?",Yolen,3));
    Books.push_back(Book("How do Dinosaurs get Well Soon?",Yolen,2));
    Books.push_back(Book("How do Dinosaurs Eat Their Food?",Yolen,5));
    Books.push_back(Book("How do Dinosaurs Learn Their Colors?",Yolen,7));
    Books.push_back(Book("How do Dinosaurs Say I Love You?",Yolen,8));
    Books.push_back(Book("How do Dinosaurs Play With Their Friends?",Yolen,8));

    Book HarryPotterOne = Book("Harry Potter and the Sorcerer's Stone", Rowling, 6);
    Book HarryPotterTwo = Book("Harry Potter and the Chamber of Secrets", Rowling, 5);
    Book HarryPotterThree = Book("Harry Potter and the Prisoner of Azkaban", Rowling, 4);
    Book HarryPotterFour = Book("Harry Potter and the Goblet of Fire", Rowling, 3);
    Book HarryPotterFive = Book("Harry Potter and the Order of the Phoenix", Rowling, 2);
    Book HarryPotterSix = Book("Harry Potter and the Half-Blood Prince", Rowling, 1);
    Book HarryPotterSeven = Book("Harry Potter and the Deathly Hallows", Rowling, 2);

    //Create Libraries
    Library new_york_library(Books, "New York Public Library");
    Library carnegie_library(Books, "Carnegie Library");
    Library british_library("The British Library");

    //Test Add New Book
    new_york_library.Add_New_Book(HarryPotterOne);
    new_york_library.Add_New_Book(HarryPotterTwo);
    new_york_library.Add_New_Book(HarryPotterThree);
    new_york_library.Add_New_Book(HarryPotterFour);
    new_york_library.Add_New_Book(HarryPotterFive);
    new_york_library.Add_New_Book(HarryPotterSix);
    new_york_library.Add_New_Book(HarryPotterSeven);

    carnegie_library.Add_New_Book(HarryPotterFour);
    carnegie_library.Add_New_Book(HarryPotterFive);

    british_library.Add_New_Book(HarryPotterOne);
    british_library.Add_New_Book(HarryPotterTwo);
    british_library.Add_New_Book(HarryPotterThree);
    british_library.Add_New_Book(HarryPotterFour);
    british_library.Add_New_Book(HarryPotterFive);
    british_library.Add_New_Book(HarryPotterSix);
    british_library.Add_New_Book(HarryPotterSeven);

    //Test Loan Book
    new_york_library.Loan_Book("Harry Potter and the Sorcerer's Stone");
    carnegie_library.Loan_Book("Harry Potter and the Goblet of Fire");
    british_library.Loan_Book("Harry Potter and the Sorcerer's Stone");

    new_york_library.Loan_Book("How do Dinosaurs get Well Soon?");

    //Loan enough until it's gone
    new_york_library.Loan_Book("Harry Potter and the Order of the Phoenix");
    carnegie_library.Loan_Book("Harry Potter and the Order of the Phoenix");
    british_library.Loan_Book("Harry Potter and the Order of the Phoenix");
    new_york_library.Loan_Book("Harry Potter and the Order of the Phoenix");
    carnegie_library.Loan_Book("Harry Potter and the Order of the Phoenix");
    british_library.Loan_Book("Harry Potter and the Order of the Phoenix");
    new_york_library.Loan_Book("Harry Potter and the Order of the Phoenix");
    carnegie_library.Loan_Book("Harry Potter and the Order of the Phoenix");
    british_library.Loan_Book("Harry Potter and the Order of the Phoenix");

    //Test Return Book
    new_york_library.Return_Book("Harry Potter and the Order of the Phoenix");
    carnegie_library.Return_Book("Harry Potter and the Order of the Phoenix");
    british_library.Return_Book("Harry Potter and the Order of the Phoenix");

    //Test return when they're all in library
    new_york_library.Return_Book("How do Dinosaurs Say Goodnight?");

    //Test print book library info.
    new_york_library.Print_Book_Library_Info("How do Dinosaurs get Well Soon?");
    carnegie_library.Print_Book_Library_Info("How do Dinosaurs get Well Soon?");

    new_york_library.Loan_Book("How do Dinosaurs get Well Soon?");
    carnegie_library.Loan_Book("How do Dinosaurs get Well Soon?");
    british_library.Loan_Book("How do Dinosaurs get Well Soon?");

    //Test print library
    new_york_library.Print_Library();
    carnegie_library.Print_Library();
    british_library.Print_Library();

    //Test print books by author
    new_york_library.Print_Books_Info_By_Author("J.K. Rowling");
    carnegie_library.Print_Books_Info_By_Author("J.K. Rowling");
    british_library.Print_Books_Info_By_Author("J.K. Rowling");

    new_york_library.Print_Books_Info_By_Author("E.B. White");
    carnegie_library.Print_Books_Info_By_Author("E.B. White");

    new_york_library.Print_Books_Info_By_Author("Jane Yolen");
    carnegie_library.Print_Books_Info_By_Author("Jane Yolen");
}