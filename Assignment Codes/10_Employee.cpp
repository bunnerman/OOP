#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
    string name;
    int id;
    int salary;
    public:
    Employee()
    {
        name = "[UNKNOWN]";
        id = 5;
        salary = 50000;
    }
    Employee(Employee &obj)
    {
        name = obj.name;
        id = obj.id;
        salary = obj.salary;
    }
    void putData()
    {
        cout << "Name- " << name << "\n";
        cout << "ID- " << id << "\n";
        cout << "Salary- " << salary << "\n";
    }
    void setSal()
    {
        cout << "Set Salary: ";
        cin >> salary;
    }
};

int main()
{
    Employee obj;
    obj.putData();
    Employee objCopy(obj);
    objCopy.setSal();
    objCopy.putData();
}
