#include <bits/stdc++.h>
using namespace std;

class Complex
{
    double real, imag;

public:
    Complex() {}
    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+(const Complex &b)
    {
        // Complex c;
        // c.real = this->real + b.real;
        // c.imag = this->imag + b.imag;
        // return c;

        return Complex(this->real + b.real, this->imag + b.imag);
    }

    Complex operator-(const Complex &b)
    {
        return Complex(this->real - b.real, this->imag - b.imag);
    }

    void print()
    {
        cout << real << " + i" << imag << "\n";
    }
};

void operator_overloading()
{
    Complex a(2, 4), b(3, 5);
    Complex c = a + b; // 5 + i9
    Complex d = a - b; // -1 + i-1
    c.print();
    d.print();

    // int a = 3, b = 2;
    // int c = a - b;
}

int main()
{
    operator_overloading();
}