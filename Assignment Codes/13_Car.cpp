#include <iostream>
#include <string>
using namespace std;

class Car
{
    private:
    string brand;
    string model;
    int year;
    public:
    Car()
    {
        brand = "Ford";
        model = "F-150";
        year = 2025;
    }
    Car(Car &obj)
    {
        brand = obj.brand;
        model = obj.model;
        year = obj.year;
    }
    void putData()
    {
        cout << "Brand/Make- " << brand << "\n";
        cout << "Model- " << model << "\n";
        cout << "Year- " << year << "\n";
    }
};

int main()
{
    Car obj;
    Car objCopy(obj);
    obj.putData();
    objCopy.putData();
}
