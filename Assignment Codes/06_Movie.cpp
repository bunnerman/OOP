#include <iostream>
#include <string>
using namespace std;

class Movie
{
    private:
    string title;
    char rating;
    public:
    Movie()
    {
        title = "[UNKNOWN]";
        rating = 'A';
        this->putData();    
    }
    void putData()
    {
        cout << "Title- " << title << "\n";
        cout << "Rating- " << rating << "\n";
    }
};

int main()
{
    Movie obj;
}
