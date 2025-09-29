#include <iostream>
#include <string>
using namespace std;

class ILogin 
{
protected:
    string name;
    string password;

public:
    virtual void accept() 
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter password: ";
        cin >> password;
    }

    virtual void display() 
    { 
        cout << "Name: " << name << endl;
        cout << "Password: " << password << endl;
    }

    virtual ~ILogin() {}
};

class EmailLogin : public ILogin {
private:
    string email;
public:
    void accept() override 
    {
        ILogin::accept();
        cout << "Enter email: ";
        cin >> email;
    }

    void display() override 
    {
        cout << "\n---Email Login Details---\n";
        ILogin::display();
        cout << "Email: " << email << endl;
    }
};

class MembershipLogin : public ILogin {
private:
    int membershipID;
public:
    void accept() override 
    {
        ILogin::accept();
        cout << "Enter membership ID: ";
        cin >> membershipID;
    }

    void display() override 
    {
        cout << "\n---Membership Login Details---\n";
        ILogin::display();
        cout << "Membership ID: " << membershipID << endl;
    }
};

int main() 
{
    EmailLogin emailEmp;
    MembershipLogin memberEmp;

    cout << "Email Login Employee Details:\n";
    emailEmp.accept();

    cout << "\nMembership Login Employee Details:\n";
    memberEmp.accept();

    emailEmp.display();
    memberEmp.display();

    return 0;
}
