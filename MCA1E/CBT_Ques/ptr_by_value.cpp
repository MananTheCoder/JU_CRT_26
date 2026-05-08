#include <bits/stdc++.h>
using namespace std;

void change(int *ptr)
{
    int b = 50;
    ptr = &b;
}

int main()
{
    int a = 10;
    int *ptr = &a;
    change(ptr);
    cout << (*ptr) << "\n";
}