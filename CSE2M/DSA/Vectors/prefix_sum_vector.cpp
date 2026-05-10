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

void get_prefix_sum(const vi &v, vi &prefix)
{
    int sum = 0;
    // for (int i = 0; i < v.size(); i++)
    forn(i, v.size())
    {
        sum += v[i];
        prefix[i] = sum;
    }
}

void prefix_sum_in_place(vi &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] += v[i - 1];
    }
}

void solve()
{
    vi v = input_vi();
    vi prefix(v.size());
    get_prefix_sum(v, prefix);
    print_vi(prefix);
}

int main()
{
    solve();
}