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
        rollNo = 100;
        name = "UNKNOWN";
        course = "Computer Engineering";
    }
    College(College &obj)
    {
        rollNo = obj.rollNo;
        name = obj.name;
        course = obj.course;
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
    College s1; // S for student

    s1.getData();
    College s2(s1);
    s2.displayData();

    return 0;
}