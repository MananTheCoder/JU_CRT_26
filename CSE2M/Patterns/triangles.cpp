#include <bits/stdc++.h>
using namespace std;

void left_aligned_triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void right_aligned_triangle(int n)
{
    for (int i = 1; i <= n; i++) // line
    {
        for (int j = 1; j <= n - i; j++) // (n-i) spaces
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) // i *
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void center_aligned_triangle(int n)
{
    for (int i = 1; i <= n; i++) // line
    {
        for (int j = 1; j <= n - i; j++) // (n-i) spaces
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) // i *
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    center_aligned_triangle(n);
}