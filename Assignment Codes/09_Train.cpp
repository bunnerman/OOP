#include <iostream>
#include <string>
using namespace std;

class Train
{
    private:
    string destination;
    int number;
    public:
    Train()
    {
        destination = "Final Stop";
        number = 0;
        this->putData();    
    }
    void putData()
    {
        cout << "Destination- " << destination << "\n";
        cout << "Number- " << number << "\n";
    }
};

int main()
{
    Train obj;
}
