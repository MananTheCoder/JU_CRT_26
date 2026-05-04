#include <bits/stdc++.h>
using namespace std;

// do middle row, last row using general_row
// see if 1 of x & y can be deduced further

void middle_row(int n)
{
    for (int i = 1; i < (2 * n); i++)
    {
        cout << "* ";
    }
    cout << "\n";
}

void last_line(int n)
{
    for (int j = 1; j <= n; j++)
    {
        cout << "* ";
    }
    for (int j = 1; j < n - 1; j++)
    {
        cout << "  ";
    }
    cout << "* \n";
}

void general_line(int x, int y, int n)
{
    // (n-2)_, 1 *, (n-2) _, y*
    for (int j = 1; j <= x; j++)
    {
        cout << "  ";
    }
    cout << "* ";
    for (int j = 1; j <= n - 2; j++)
    {
        cout << "  ";
    }
    for (int j = 1; j <= y; j++)
    {
        cout << "* ";
    }
}

void swastik(int n)
{
    for (int line = 1; line < n; line++)
    {
        if (line == 1)
        {
            general_line(0, n, n);
        }
        else
        {
            general_line(0, 1, n);
        }
        cout << "\n";
    }
    middle_row(n);
    for (int line = 1; line < n - 1; line++)
    {
        general_line(n - 1, 1, n);
        cout << "\n";
    }
    last_line(n);
}

int main()
{
    int n;
    cin >> n;
    swastik(n);
}