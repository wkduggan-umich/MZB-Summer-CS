#include <iostream>
#include <vector>
using namespace std;

struct Author{
    string name;
    bool alive;
    int age;
};

class Book{
    private:
        string title;
        Author author;
        int num_copies_loaned;
        int num_copies_in_library;

    public:
        Book(){
            title = "";
            author.name = "";
            author.age = 0;
            author.alive = false;
            num_copies_loaned = 0;
            num_copies_in_library = 0;
        }

        Book(string _title, Author _author, int _num_copies_in_library){
            title = _title;
            author = _author;
            num_copies_loaned = 0;
            num_copies_in_library = _num_copies_in_library;
        }

        string get_title(){
            return title;
        }

        Author get_author(){
            return author;
        }

        void loan_book(){
            ++num_copies_loaned;
            --num_copies_in_library;
        }

        void return_book(){
            --num_copies_loaned;
            ++num_copies_in_library;
        }

        int get_number_loaned(){
            return num_copies_loaned;
        }

        int get_number_in_library(){
            return num_copies_in_library;
        }

        int get_total_number_copies(){
            return num_copies_loaned + num_copies_in_library;
        }

        void Print_Book(){
            cout << "\"" << title << "\" by " << author.name;
            if(!author.alive){
                cout << " (D)";
            } else {
                cout << " (" << author.age << ")";
            }
        }
};

class Library{
    private:
        vector<Book> Books;
        string name;

    public:
        Library(string _Name){
            name = _Name;
            Books = vector<Book>();
        }

        Library(vector<Book> _Books, string _Name){
            Books = _Books;
            name = _Name;
        }

        void Add_New_Book(Book new_book){
            Books.push_back(new_book);
            new_book.Print_Book();
            cout << " was added to " << name << ".\n";
        }

        void Loan_Book(string Book_Title){
            for(int i = 0; i < Books.size(); ++i){
                if(Books[i].get_title() == Book_Title){
                    if(Books[i].get_number_in_library() > 0){
                        Books[i].loan_book();
                        Books[i].Print_Book();
                        cout << " was loaned out. There are " 
                            << Books[i].get_number_in_library() << " (of " << 
                            Books[i].get_total_number_copies() << " total) copies in " << name << ".\n";
                        return;
                    } else {
                        cout << "There are no copies of ";
                        Books[i].Print_Book();
                        cout << " to be loaned at " << name << ".\n";
                    }
                }       
            }
        }

        void Return_Book(string Book_Title){
            for(int i = 0; i < Books.size(); ++i){
                if(Books[i].get_title() == Book_Title){
                    if(Books[i].get_number_loaned() > 0){
                        Books[i].return_book();
                        Books[i].Print_Book();
                        cout << " was returned. There are now " 
                            << Books[i].get_number_in_library() << " copies in " << name << " of the " 
                            << Books[i].get_total_number_copies() << " total copies.\n";
                        return;
                    } else {
                        cout << "There are no copies of ";
                        Books[i].Print_Book();
                        cout << " currently on loan at " << name << ".\n";
                    }
                    
                }
            }
        }

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

        void Print_Library(){
            cout << name << " has a total of " << Books.size() << " different books!\n";
            for(int i = 0; i < Books.size(); ++i){
                Print_Book_Library_Info(Books[i].get_title());
            }
        }

        void Print_Books_Info_By_Author(string author_name){
            int num_books_by_author = 0;
            for(int i = 0; i < Books.size(); ++i){
                if(Books[i].get_author().name == author_name){
                    ++num_books_by_author;
                }
            }
            cout << name << " has a total of " << num_books_by_author << " books by " << author_name << "!\n";
            for(int i = 0; i < Books.size(); ++i){
                if(Books[i].get_author().name == author_name){
                    Print_Book_Library_Info(Books[i].get_title());
                }
            }
        }
};