#include <bits/stdc++.h>
using namespace std;

class Hobby
{
public:
    virtual void leisure_time()
    {
        cout << "Hobby time... \n";
    }
};

class Dance : public Hobby
{
public:
    void leisure_time()
    {
        cout << "I am dancing.\n";
    }
};

class Movies : public Hobby
{
public:
    void leisure_time()
    {
        cout << "I am watching movies.\n";
    }
};

class Reading : public Hobby
{
public:
    void leisure_time()
    {
        cout << "I am reading books.\n";
    }
};

class Chess : public Hobby
{
public:
    void leisure_time()
    {
        cout << "I am playing chess.\n";
    }
};

class Satta : public Hobby
{
public:
    void leisure_time()
    {
        cout << "I am gambling.\n";
    }
};

void playground()
{
    Hobby *chitransh = new Reading();
    chitransh->leisure_time();

    Hobby *shraddha = new Dance();
    shraddha->leisure_time();
    Hobby *melvin = new Movies();
    melvin->leisure_time();
    Hobby *yash = new Chess();
    yash->leisure_time();
    Hobby *karthik = new Satta();
    karthik->leisure_time();
}

int main()
{
    playground();
}