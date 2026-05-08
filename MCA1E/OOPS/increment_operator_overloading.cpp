#include <bits/stdc++.h>
using namespace std;

class myInt
{
private:
    int my_int;

public:
    myInt() {}
    myInt(int i) : my_int(i) {}

    void print()
    {
        cout << "i: " << my_int << "\n";
    }

    myInt operator++() // prefix increment operator
    {
        ++this->my_int;
        return *this;
    }

    myInt &operator--() // prefix decrement operator
    {
        --this->my_int;
        return *this;
    }

    myInt operator++(int) // postfix increment operator
    {
        myInt temp = *this;
        this->my_int++;
        return temp;
    }
};

void playground()
{
    // int a = 5;
    // int b = ++ ++a;
    // cout << a << "\t" << b << "\n";

    myInt a1(5);
    myInt b1 = ++ ++ ++ ++a1;
    a1.print();
    b1.print();
}

int main()
{
    playground();
}