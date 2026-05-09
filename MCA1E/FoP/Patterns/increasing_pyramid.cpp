#include <bits/stdc++.h>
using namespace std;

void increasing_pyramid(int n)
{
    for (int line = 1; line <= n; line++)
    {
        for (int j = 1; j <= line; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    increasing_pyramid(n);
    // pascals for HW
}