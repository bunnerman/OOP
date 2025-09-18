#include <iostream>
#include <string>
using namespace std;

class Account
{
    private:
    int accNo;
    int balance;
    public:
    Account()
    {
        accNo = 1000;
        balance = 0;
    }
    Account(Account &obj)
    {
        accNo = obj.accNo;
        balance = obj.balance;
    }
    void putData()
    {
        cout << "Account Number- " << accNo << "\n";
        cout << "Balance- " << balance << "\n";
    }
    void depositMoney()
    {
        int dep;
        cout << "Enter Deposit Amount: ";
        cin >> dep;
        balance += dep;
    }
};

int main()
{
    Account obj;
    obj.putData();
    Account objCopy(obj);
    objCopy.depositMoney();
    objCopy.putData();
    obj.putData();
}
