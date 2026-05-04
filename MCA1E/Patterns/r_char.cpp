#include <bits/stdc++.h>
using namespace std;

void char_o(int l, int b)
{
    for (int line = 1; line <= l; line++)
    {
        cout << "* ";
        for (int j = 1; j <= b - 2; j++)
        {
            cout << ((line > 1 && line < l) ? "  " : "* ");
        }
        cout << "* \n";
    }
}

void char_r(int n)
{
    char_o(n, n);
    for (int line = 1; line <= n - 1; line++)
    {
        cout << "* ";
        for (int j = 1; j <= line - 1; j++)
        {
            cout << "  ";
        }
        cout << "* \n";
    }
}

int main()
{
    int n;
    cin >> n;
    char_r(n);
}