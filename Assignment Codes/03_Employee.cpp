#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
    int id;
    int salary;
    public:
    Employee(int a, int b)
    {
        id = a;
        salary = b;
        this->putData();    
    }
    void putData()
    {
        cout << "ID- " << id << "\n";
        cout << "Salary- " << salary << "\n";
    }
};

int main()
{
    Employee obj(67, 5000000);
}
