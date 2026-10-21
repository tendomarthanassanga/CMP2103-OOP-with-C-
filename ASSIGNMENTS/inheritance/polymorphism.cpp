#include <iostream>
using namespace std;

// Base class
class BankAccount
{
public:
    double balance;

    virtual void calculateInterest()
    {
        cout << "Calculating account interest" << endl;
    }
};

// First derived class
class SavingsAccount : public BankAccount
{
public:
    void calculateInterest() override
    {
        cout << "Savings account interest: UGX "
             << balance * 0.05 << endl;
    }
};

// Second derived class
class CurrentAccount : public BankAccount
{
public:
    void calculateInterest() override
    {
        cout << "Current account interest: UGX "
             << balance * 0.02 << endl;
    }
};

// Function using a base-class reference
void showInterest(BankAccount& account)
{
    account.calculateInterest();
}

int main()
{
    SavingsAccount savings;
    CurrentAccount current;

    savings.balance = 1000000;
    current.balance = 1000000;

    cout << "BANK ACCOUNT INTEREST" << endl;

    showInterest(savings);
    showInterest(current);

    return 0;
}
