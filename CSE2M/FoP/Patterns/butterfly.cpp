#include <bits/stdc++.h>
using namespace std;

void butterfly(int n)
{
    for (int line = 1; line <= n; line++)
    {
        for (int j = 1; j <= line; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= 2 * (n - line); j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= line; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    for (int line = n; line >= 1; line--)
    {
        for (int j = 1; j <= line; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= 2 * (n - line); j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= line; j++)
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
    butterfly(n);
}