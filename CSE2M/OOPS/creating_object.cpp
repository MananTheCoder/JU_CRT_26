#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    string type;
    string color;
    string sound;
    char gender;
    int age;

    Animal()
    {
        cout << "Default constructor called.\n";
        this->color = "";
    }

    Animal(string type, string color, int age)
    {
        this->age = age;
        this->color = color;
        this->gender = gender;
    }

    Animal(int a, string c, string n) : age(a), color(c), type(n)
    {
        cout << "Parametrized constructor called.\n";
    }

    Animal(Animal &obj)
    {
        this->type = obj.type;
        this->color = obj.color;
        this->sound = obj.sound;
        this->gender = obj.gender;
        this->age = obj.age;
    }

    ~Animal()
    {
        cout << "Destructor called.\n";
    }
};

void understanding_objects()
{
    Animal sheru;
    Animal ruby("cat", "White", 10);
    Animal tutu(7, "orangish", "turtle");
    tutu.sound = "jadoo";
    tutu.gender = 'M';

    Animal oswald(tutu);
    oswald.type = "Octopus";
    cout << oswald.age << "\n";

    // cout << ruby.age << "\n";
    // dog.color = "black";
    // dog.age = 3;
    // dog.gender = 'M';
}

void playing_with_desctructors()
{
    Animal tutu(7, "orangish", "turtle");
    // Scope 1
    {
        // Animal tutu(7, "orangish", "turtle");
        tutu.age = 12;
    }
    cout << "Outside scope1.\n";
}

int main()
{
    // understanding_objects();
    playing_with_desctructors();
}