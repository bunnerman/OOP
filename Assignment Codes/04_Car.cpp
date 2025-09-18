#include <iostream>
#include <string>
using namespace std;

class Car
{
    private:
    string model;
    int year;
    public:
    Car(string a, int b)
    {
        model = a;
        year = b;
        this->putData();    
    }
    void putData()
    {
        cout << "Model- " << model << "\n";
        cout << "Year- " << year << "\n";
    }
};

int main()
{
    Car obj("Ford F-150", 2025);
}
