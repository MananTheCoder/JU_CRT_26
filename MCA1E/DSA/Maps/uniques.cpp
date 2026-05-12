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

void print_uniques(vi &v)
{
    map<int, int> presence;
    for (int x : v)
    {
        presence[x]++;
    }
    for (pair<int, int> p : presence)
    {
        if (p.second == 1)
        {
            cout << p.first << "\t";
        }
    }
    cout << "\n";
}

void solve()
{
    vi v = input_vi();
    print_uniques(v);
}

int main()
{
    solve();
}