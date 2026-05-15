#include <iostream>
#include <vector>
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

vi merge(const vi &a, const vi &b)
{
    int m = a.size(), n = b.size();
    vi c(m + n);
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    // if (i == m)
    // {
    while (j < n)
    {
        c[k++] = b[j++];
    }
    // }
    // if (j == n)
    // {
    while (i < m)
    {
        c[k++] = a[i++];
    }
    // }
    return c;
}

void solve()
{
    vi a = input_vi(), b = input_vi();
    vi c = merge(a, b);
    print_vi(c);
}

int main()
{
    solve();
}