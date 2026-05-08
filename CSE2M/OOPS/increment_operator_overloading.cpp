#include <bits/stdc++.h>
using namespace std;

// for overloading operators, atleast 1 obj must be user defined.

class myInt
{
private:
    int my_int;

public:
    myInt() {}
    myInt(int i) : my_int(i) {}

    void print()
    {
        cout << "Int: " << this->my_int << "\n";
    }

    myInt &operator++() // correct the return type
    {
        ++(this->my_int);
        return *this;
    }

    myInt operator++(int)
    {
        myInt temp = *this;
        (this->my_int)++;
        return temp;
    }
};

void prefix_increment()
{
    // int a = 5;
    // int b = ++a;
    // cout << a << "\t" << b << "\n";

    myInt a1(5);
    myInt b1 = ++a1;
    a1.print();
    b1.print();
    cout << &a1 << "\t" << &b1 << "\n";
}

void postfix_increment()
{
    myInt a1(5);
    myInt b1 = a1++;
    a1.print();
    b1.print();
}

int main()
{
    // playing_with_polymorphism();
    postfix_increment();
}