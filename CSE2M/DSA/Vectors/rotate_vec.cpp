#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

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

void rotate_cw(vi &v)
{
    int n = v.size();
    int temp = v[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        v[i] = v[i - 1];
    }
    v[0] = temp;
}

void solve()
{
    vi v = input_vi();
    rotate_cw(v);
    print_vi(v);
}

int main()
{
    solve();
}