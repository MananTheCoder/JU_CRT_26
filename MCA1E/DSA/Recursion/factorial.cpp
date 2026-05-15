#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define forn(i, n) for (int i = 0; i < n; i++)

vi input_vi()
{
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    return v;
}

void print_vi(vi &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    cout << "\n";
}

int fac(int n)
{
    // Base Case
    if (n == 0)
    {
        return 1;
    }
    return n * fac(n - 1);
}

void solve()
{
    int n;
    cin >> n;
    cout << fac(n) << "\n";
}

int main()
{
    solve();
}