#include <iostream>
#include <string>
using namespace std;

class ILogin
{
    protected:
    string name;
    string pwd;
    public:
    virtual void accept(){}
};

class EmailLogin: public ILogin
{
    public:
    void accept() override
    {
        name = "abc@mail.com";
        pwd = "example";
        cout << "Email Login Name: " << name << "\n";
        cout << "Password: " << pwd << "\n";
    }
};


class MembershipLogin: public ILogin
{
    public:
    void accept() override
    {
        name = "member";
        pwd = "memberpwd";
        cout << "Membership Login Name: " << name << "\n";
        cout << "Password: " << pwd << "\n";
    }
};

int main()
{
    ILogin *login;
    EmailLogin e;
    MembershipLogin m;
    
    login = &e;
    login->accept();
    
    login = &m;
    login->accept();
    
    return 0;
}
