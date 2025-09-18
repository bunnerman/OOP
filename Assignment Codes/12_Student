#include <iostream>
#include <string>
using namespace std;

class StudentRecord
{
    private:
    string name;
    int rollNo;
    float grades;
    public:
    StudentRecord()
    {
        name = "John";
        rollNo = 4;
        grades = 0;
    }
    StudentRecord(StudentRecord &obj)
    {
        name = obj.name;
        rollNo = obj.rollNo;
        grades = obj.grades;
    }
    void putData()
    {
        cout << "Student Record Number- " << name << "\n";
        cout << "Roll No- " << rollNo << "\n";
        cout << "Grades- " << grades << "\n";
    }
    void updateGrade()
    {
        cout << "Enter New Grades: ";
        cin >> grades;
    }
};

int main()
{
    StudentRecord obj;
    obj.putData();
    StudentRecord objCopy(obj);
    objCopy.updateGrade();
    objCopy.putData();
    obj.putData();
}
