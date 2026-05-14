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

bool binary_search(vi &v, int key, int start, int end)
{
    if (start > end)
    {
        return false;
    }
    int mid = start + (end - start) / 2;
    if (v[mid] == key)
    {
        return true;
    }
    if (key < v[mid])
    {
        return binary_search(v, key, start, mid - 1);
    }
    return binary_search(v, key, mid + 1, end);
}

void solve()
{
    vi v = input_vi();
    int key;
    cin >> key;
    sort(v.begin(), v.end());
    cout << binary_search(v, key, 0, v.size() - 1) << "\n";
}

int main()
{
    solve();
}