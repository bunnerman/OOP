#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
    string name;
    float perc;
    public:
    Student()
    {
        name = "[UNKNOWN]";
        perc = 0;
    }
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter percentage: ";
        cin >> perc;
    }
    void displayData()
    {
        cout << "Name- " << name << "\n";
        cout << "Percentage- " << perc << "\n";
    }
};

int main()
{
    Student s1, s2;
    s1.displayData();

    s1.getData();
    s1.displayData();
    s2.getData();
    s2.displayData();
    // copied
    return 0;
}