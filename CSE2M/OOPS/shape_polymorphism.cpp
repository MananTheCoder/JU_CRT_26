#include <bits/stdc++.h>
using namespace std;

const double PI = 3.1418;

class Shape
{
private:
    int edges;
    double _area;
    string name;

public:
    Shape() {}
    Shape(int e) : edges(e) {}

    void print_area()
    {
        cout << "Area: " << _area << '\n';
    }

    void get_area(int side)
    {
        _area = side * side;
    }
    void get_area(int length, int breadth)
    {
        _area = length * breadth;
    }
    void get_area(double radius)
    {
        _area = PI * radius * radius;
    }
    void get_area(int base1, int base2, int height)
    {
        _area = 0.5 * height * (base1 + base2);
    }
};

void polymorphism()
{
    Shape circle(1), square(4), rectangle(4), trapezium(4);
    square.get_area(4);
    square.print_area(); // 16
    rectangle.get_area(2, 6);
    rectangle.print_area(); // 12
    circle.get_area(1.0);
    circle.print_area(); // 3.1418
    trapezium.get_area(2, 4, 3);
    trapezium.print_area(); // 9
}

int main()
{
    polymorphism();
}