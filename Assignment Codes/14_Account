#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
    string name;
    string department;
    int salary;
    public:
    Employee()
    {
        name = "[UNKNOWN]";
        department = "General";
        salary = 30000;
    }
    Employee(Employee &obj)
    {
        name = obj.name;
        department = obj.department;
        salary = obj.salary;
    }
    void getData()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Department: ";
        cin >> department;
        cout << "Salary: ";
        cin >> salary;
    }
    void putData()
    {
        cout << "Name- " << name << "\n";
        cout << "Department- " << department << "\n";
        cout << "Salary- " << salary << "\n";
    }
};

int main()
{
    Employee obj;
    Employee obj2(obj);
    Employee obj3(obj);
    obj.putData();
    obj2.getData();
    obj3.getData();
    obj2.putData();
    obj3.putData();
}
