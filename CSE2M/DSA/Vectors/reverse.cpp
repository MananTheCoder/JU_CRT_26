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

void reverse(vi &v)
{
    int n = v.size();
    for (int low = 0; low < (n) / 2; low++)
    // for (int low = 0; low <= n - 1; low++)
    {
        swap(v[low], v[n - 1 - low]);
    }
}

void solve()
{
    vi v = input_vi();
    reverse(v);
    print_vi(v);
}

int main()
{
    solve();
}