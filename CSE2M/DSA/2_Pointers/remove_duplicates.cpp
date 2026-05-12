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

int remove_duplicates(vi &v) // O(n+k)
{
    int d = 0, i = 1;
    while (i < v.size()) // n
    {
        if (v[d] == v[i])
        {
            i++;
        }
        else
        {
            d++; // k
            v[d] = v[i];
        }
    }
    return (d + 1);
}

int remove_duplicates_sanitized(vi &v)
{
    int d = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[d] != v[i])
        {
            v[++d] = v[i];
        }
    }
    return (d + 1);
}

void solve()
{
    vi v = input_vi();
    int k = remove_duplicates(v);
    forn(i, k)
    {
        cout << v[i] << "\t";
    }
    cout << "\n";
    // print_vi(v);
}

int main()
{
    solve();
}