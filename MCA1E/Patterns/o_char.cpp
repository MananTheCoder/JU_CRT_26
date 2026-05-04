#include <bits/stdc++.h>
using namespace std;

void char_o(int l, int b)
{
    for (int line = 1; line <= l; line++)
    {
        cout << "* ";
        for (int j = 1; j <= b - 2; j++)
        {
            if (line > 1 && line < l)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        // if (line == 1 || line == l)
        // {
        //     for (int j = 1; j <= b; j++)
        //     {
        //         cout << "* ";
        //     }
        // }
        // else
        // {
        //     // cout << "* ";

        //     cout << "* ";
        // }
        cout << "* \n";
    }
}

void char_o_simpler(int l, int b)
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

int main()
{
    int l, b;
    cin >> l >> b;
    char_o_simpler(l, b);
}