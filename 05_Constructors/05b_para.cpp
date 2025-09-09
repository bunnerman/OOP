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
    Student(string i1, float i2)
    {
        name = i1;
        perc = i2;
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
    Student s1("abc", 500);
    s1.displayData();
    // copied
    return 0;
}