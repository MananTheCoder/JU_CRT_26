#include <bits/stdc++.h>
using namespace std;

class Hobbies
{
public:
    virtual void leisure_time()
    {
        cout << "Hobby time.\n";
    }
};

class Vikram : public Hobbies
{
public:
    void leisure_time() override
    {
        cout << "I play chess.\n";
    }
};

class Siddharth : public Hobbies
{
    void leisure_time() override
    {
        cout << "I am professional guitarist.\n";
    }
};

void playground()
{
    Hobbies *ptr = new Vikram();
    ptr->leisure_time();

    Hobbies *ptr2 = new Siddharth();
    ptr2->leisure_time();
}

int main()
{
    playground();
}