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

void solve()
{
    vector<int> v({3, 4, 5, 1, 2});
    vector<int>::iterator itr;
    // auto;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << (*itr) << "\t";
    }
    cout << '\n';
}

int main()
{
    solve();
}