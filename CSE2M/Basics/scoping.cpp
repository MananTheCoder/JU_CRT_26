#include <bits/stdc++.h>
using namespace std;

int a = 1;

void fun2(int &a)
{
    for (int i = 1; i <= 10; i++)
    {
        a++;
    }
}

void fun1()
{
    int a = 3;
    fun2(a);
    cout << a << "\n";
    // for (int i = 1; i <= 10; i++)
    // {
    //     a = 1;
    //     a++;
    // }
}

int main()
{
    fun1();
}