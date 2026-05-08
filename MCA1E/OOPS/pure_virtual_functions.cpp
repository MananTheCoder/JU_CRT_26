#include <bits/stdc++.h>
using namespace std;

class Hobby
{
public:
    virtual void leisure_time() = 0;
};

class Dance : public Hobby
{
public:
    void leisure_time() override
    {
        cout << "I am dancing.\n";
    }
};

class Movies : public Hobby
{
public:
    void leisure_time() override
    {
        cout << "I am watching movies.\n";
    }
};

class Reading : public Hobby
{
public:
    void leisure_time() override
    {
        cout << "I am reading books.\n";
    }
};

class Chess : public Hobby
{
public:
    void leisure_time() override
    {
        cout << "I am playing chess.\n";
    }
};

class Satta : public Hobby
{
public:
    void leisure_time() override
    {
        cout << "I am gambling.\n";
    }
};

void playground()
{
    Hobby *chitransh = new Reading();
    Hobby *shraddha = new Dance();
    Hobby *melvin = new Movies();
    Hobby *yash = new Chess();
    Hobby *karthik = new Satta();

    Hobby *ptrs[5] = {chitransh, shraddha, melvin, yash, karthik};

    for (int i = 0; i < 5; i++)
    {
        ptrs[i]->leisure_time();
    }
}

int main()
{
    playground();
}