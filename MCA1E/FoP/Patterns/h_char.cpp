#include <bits/stdc++.h>
using namespace std;

void char_h(int n)
{
    for (int line = 1; line <= 2 * n - 1; line++)
    {
        cout << "* ";
        for (int j = 1; j <= n - 2; j++)
        {
            cout << ((line == n) ? "* " : "  ");
        }
        cout << "* \n";
    }
}

int main()
{
    int n;
    cin >> n;
    char_h(n);
}