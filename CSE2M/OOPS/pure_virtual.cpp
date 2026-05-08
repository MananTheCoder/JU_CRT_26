#include <bits/stdc++.h>
using namespace std;

class Hobbies
{
public:
    virtual void leisure_time() = 0;
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
public:
    void leisure_time() override
    {
        cout << "I am professional guitarist.\n";
    }
};

class Sonia : public Hobbies
{
public:
    void leisure_time() override
    {
        cout << "I swim.\n";
    }
};

void playground()
{
    Hobbies *ptr = new Vikram();
    Hobbies *ptr2 = new Siddharth();
    Hobbies *ptr3 = new Sonia();

    Hobbies *ptrs[3] = {ptr, ptr2, ptr3};
    for (int i = 0; i < 3; i++)
    {
        ptrs[i]->leisure_time();
    }
}

int main()
{
    playground();
}