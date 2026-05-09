#include <bits/stdc++.h>
using namespace std;

void butterfly_helper(int n, int line)
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

void butterfly(int n)
{
    for (int line = 1; line <= 2 * n - 1; line++)
    {
        // if (line > n)
        // {
        //     line = 2 * n - line;
        // }
        butterfly_helper(n, min(line, 2 * n - line));
    }
    // for (int line = n - 1; line >= 1; line--)
    // {
    //     butterfly_helper(n, line);
    // }
}

int main()
{
    int n;
    cin >> n;
    butterfly(n);
}