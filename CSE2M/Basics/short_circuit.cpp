#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a = -1, b = 2;
    int c = ++a || b--;
    int d = --c || b--;
    cout << a << "\t" << b << "\t" << c << "\t" << d << "\n";
}

int main()
{
    solve();
}