#include <iostream>
#include <string>
using namespace std;

class College
{
private:
    int rollNo;
    string name;
    string course;
public:
    College()
    {
        course = "Computer Engineering";
    }

    void getData()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Course: ";
        cin >> course;
    }

    void displayData()
    {
        cout << "Roll No- " << rollNo << "\n";
        cout << "Name- " << name << "\n";
        cout << "Course- " << course << "\n";
    }
};

int main()
{
    College s[2]; // S for student
    int i;

    for (i = 0; i < 2; i++)
    {
        cout << "Student " << i + 1 << "\n";
        s[i].displayData();
    }

    cout << "Above values except Com.Engn. will be garbage values\n\n";

    for (i = 0; i < 2; i++)
    {
        cout << "Student " << i + 1 << "\n";
        s[i].getData();
    }

    for (i = 0; i < 2; i++)
    {
        cout << "Student " << i + 1 << "\n";
        s[i].displayData();
    }

    return 0;
}
