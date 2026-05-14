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

bool binary_search(vi &v, int key)
{
    int start = 0, end = v.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (v[mid] == key)
        {
            return true;
        }
        if (key < v[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return false;
}

void solve()
{
    vi v = input_vi();
    int key;
    cin >> key;
    sort(v.begin(), v.end());
    cout << binary_search(v, key) << "\n";
}

int main()
{
    solve();
}