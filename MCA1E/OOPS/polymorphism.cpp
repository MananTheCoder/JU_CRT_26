#include <bits/stdc++.h>
using namespace std;

const double pi = 3.14159;

class Shape
{
private:
    double area;
    int edges;

public:
    Shape() {}

    Shape(int e) : edges(e) {}

    void calc_area(double radius) { area = pi * radius * radius; }

    void calc_area(int side) { area = side * side; }

    void calc_area(int length, int breadth) { area = length * breadth; }

    void calc_area(int base, double height) { area = 0.5 * base * height; }

    void print_area() { cout << area << "\n"; }
};

void polymorphism()
{
    Shape circle(0), square(4), rectangle, triangle(3);
    circle.calc_area(1.0);
    square.calc_area(4);
    rectangle.calc_area(3, 1);
    triangle.calc_area(4, 5.0);

    circle.print_area();    // 3.14159
    square.print_area();    // 16
    rectangle.print_area(); // 3
    triangle.print_area();  // 10
}

int main()
{
    polymorphism();
}