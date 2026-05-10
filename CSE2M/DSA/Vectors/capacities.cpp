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
    vector<int> v;
    // cout << v.size() << "\n";
    cout << "Size\tCapacity\n";
    forn(i, 50)
    {
        v.push_back(6);
        cout << v.size() << "\t" << v.capacity() << '\n';
    }
}

int main()
{
    solve();
}