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

vi merge(const vi &a, const vi &b)
{
    int m = a.size(), n = b.size();
    vi c(m + n);
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    while (j < n)
    {
        c[k++] = b[j++];
    }
    while (i < m)
    {
        c[k++] = a[i++];
    }
    return c;
}

void solve()
{
    vi a = input_vi(), b = input_vi();
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vi c = merge(a, b);
    print_vi(c);
    // int m = 3, n = a.size() - m;
    // merge(a, l, r, m);
}

int main()
{
    solve();
}