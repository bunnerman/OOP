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
    Student(Student &s)
    {
        name = s.name;
        perc = s.perc;
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
    Student s1;
    s1.displayData();
    
    s1.getData();
    s1.displayData();
    Student s2(s1);

    // to show that copy works
    s2.displayData();
    // copied
    return 0;
}