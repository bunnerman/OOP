#include <iostream>
#include <string>
using namespace std;

class Animal
{
    public:
    Animal()
    {
        cout << "Animal Created\n";
    }
    ~Animal()
    {
        cout << "Animal Destroyed\n";
    }
};

int main()
{
    int n;
    {
        Animal pigeon;
        cout << "Continuing by entering any integer will DESTROY animal as it goes out of scope: ";
        cin >> n;
    }
    // Out of Scope of local block
}
