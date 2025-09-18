#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    private:
    string accHolder;
    int balance;
    public:
    BankAccount()
    {
        accHolder = "[UNKNOWN]";
        balance = 0;
        this->putData();    
    }
    void putData()
    {
        cout << "Account Holder Name- " << accHolder << "\n";
        cout << "Balance- " << balance << "\n";
    }
};

int main()
{
    BankAccount obj;
}
