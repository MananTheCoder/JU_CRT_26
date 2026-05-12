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

void distinct_count(const vi &v)
{
    unordered_map<int, int> freq_map;
    for (int x : v)
    {
        freq_map[x]++;
    }
    cout << freq_map.size() << '\n';
}

void solve()
{
    vi v = input_vi();
    distinct_count(v);
}

int main()
{
    solve();
}