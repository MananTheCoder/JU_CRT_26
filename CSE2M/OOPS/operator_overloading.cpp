#include <bits/stdc++.h>
using namespace std;

// for overloading operators, atleast 1 obj must be user defined.

class Complex
{
private:
    double real, imag;

public:
    Complex() {}
    Complex(double r, double i) : real(r), imag(i) {}

    void print()
    {
        cout << real << " + " << imag << "i\n";
    }

    Complex operator+(Complex a)
    {
        // Complex c;
        // c.real = this->real + a.real;
        // c.imag = this->imag + a.imag;
        // return c;
        return Complex(this->real + a.real, this->imag + a.imag);
    }

    Complex operator-(const Complex &a)
    {
        return Complex(this->real - a.real, this->imag - a.imag);
    }

    Complex operator*(const Complex &a)
    {
        Complex c;
        int a1 = this->real, a2 = a.real;
        int b1 = this->imag, b2 = a.imag;
        c.real = a1 * a2 - b1 * b2;
        c.imag = a1 * b2 + b1 * a2;
        return c;
    }
};

void overload_plus()
{
    Complex c1(2, 4), c2(3, 5);
    Complex c3 = c1 + c2;
    c3 = c1 - c2;
    c3.print();
    int c = 1 + 2;
}

int main()
{
    // playing_with_polymorphism();
    overload_plus();
}