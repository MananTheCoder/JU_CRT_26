#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int age;
    double cgpa;

public:
    Student() {}
    Student(string n, int a) : name(n), age(a) {}

    void set_cgpa(double cgpa)
    {
        this->cgpa = cgpa;
    }
    double get_cgpa()
    {
        return this->cgpa;
    }

    void behaves(string arg) // arg -> inClass
    {
        cout << "Some students study, others duty outside.\n";
    }
    void behaves(string venue, string group) // playground, friends
    {
        cout << "Plays\n";
    }
};

void playing_with_polymorphism()
{
    Student jahnvi("Jahnvi", 20);
    jahnvi.set_cgpa(7.9);
    jahnvi.behaves("Playground", "Friends");
}

int main()
{
    playing_with_polymorphism();
}