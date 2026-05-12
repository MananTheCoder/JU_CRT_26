#include <iostream>
#include <vector>
#include <map>
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

int distinct_count(vi &v)
{
    map<int, bool> presence;
    for (int x : v)
    {
        presence[x] = true;
    }
    return presence.size();
}

void solve()
{
    vi v = input_vi();
    cout << distinct_count(v) << "\n";
}

int main()
{
    solve();
}