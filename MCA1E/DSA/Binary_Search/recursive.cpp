// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define forn(i, n) for (int i = 0; i < n; i++)

vector<int> input_vi()
{
    int n;
    cin >> n;
    vi v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    return v;
}

void print_vi(const vi &v)
{
    forn(i, v.size())
    {
        cout << v[i] << '\t';
    }
    cout << "\n";
}

bool my_binary_search(vi &v, int key, int l, int r)
{
    if (l > r)
    {
        return false;
    }
    int m = (l + r) / 2;
    if (v[m] == key)
    {
        return true;
    }
    if (key < v[m])
    {
        return my_binary_search(v, key, l, m - 1);
    }
    return my_binary_search(v, key, m + 1, r);
}

void solve()
{
    vi v = input_vi();
    sort(v.begin(), v.end());
    int key;
    cin >> key;
    cout << my_binary_search(v, key, 0, v.size() - 1) << "\n";
}

int main()
{
    solve();
}