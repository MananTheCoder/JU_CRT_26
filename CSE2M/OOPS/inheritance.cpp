#include <bits/stdc++.h>
using namespace std;

class Bacteria
{
private:
    int no_of_cells;

public:
    void eat()
    {
        cout << "I eat dead organic materials.\n";
    }
};

class Fungi
{
    void eat()
    {
        cout << "Hi.... I eat you!\n";
    }
};

class Mammal : public Bacteria
{
    int limbs;
    void eat()
    {
        cout << "I eat plants and animals.\n";
    }
};

class Platypus : public Mammal
{
    void eat()
    {
        cout << "I sweat milk.\n";
    }
};

class Dolphin : public Mammal
{
public:
    void eat()
    {
        cout << "I eat fishes.\n";
    }
};

void inheritance()
{
    //
}

int main()
{
    // understanding_objects();
    inheritance();
}