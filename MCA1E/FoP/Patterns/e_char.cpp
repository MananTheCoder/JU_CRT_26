#include <bits/stdc++.h>
using namespace std;

void char_e_simpler(int n)
{
    for (int line = 1; line <= 2 * n - 1; line++)
    {
        cout << "* ";
        if (line == 2 * n - 1 || line == n || line == 1)
        {
            for (int j = 1; j <= n - 1; j++)
            {
                cout << "* ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    char_e_simpler(n);
}