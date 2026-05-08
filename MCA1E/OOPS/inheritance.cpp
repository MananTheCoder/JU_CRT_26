#include <bits/stdc++.h>
using namespace std;

class RBI
{
public:
    void statement()
    {
        cout << "Any financial transaction goes through me.\n";
    }
};

class Payment : public RBI
{
private:
    int amount;

public:
    void set_amount(int amount) { this->amount = amount; }
    int get_amount() { return this->amount; }

    void transfer(int amt)
    {
        cout << amt << " sent.\n";
    }
};

class Loans : public RBI
{
    int cibil;
    double interest;

public:
    void statement() { cout << "Loan approved.\n"; }
};

class UPI : public Payment, public Loans
{
    string app;

public:
    void transfer(int amt)
    {
        cout << amt << " sent via UPI.\n";
    }
};

class CreditCard : public Payment, public Loans
{
public:
    void transfer(int amt)
    {
        cout << amt << " sent via Credit Card.\n";
    }
};

void inheritance()
{
    // UPI upi;
    // upi.transfer(100);
    Payment p;
    p.transfer(100);
}

int main()
{
    inheritance();
}