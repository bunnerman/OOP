#include <iostream>
#include <string>
using namespace std;

class Book
{
    private:
    string title;
    string author;
    public:
    Book(string a, string b)
    {
        title = a;
        author = b;
        this->putData();    
    }
    void putData()
    {
        cout << "Title- " << title << "\n";
        cout << "Author- " << author << "\n";
    }
};

int main()
{
    Book obj("Dune", "Frank Herbert");
}
