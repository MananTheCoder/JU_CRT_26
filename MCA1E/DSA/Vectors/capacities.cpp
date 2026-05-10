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

void solve()
{
    // vi v = {1, 2, 3, 4, 5};
    vi v;
    // cout << "Size\tCapacity\n";
    // forn(i, 100)
    // {
    //     v.push_back(i);
    //     cout << v.size() << "\t" << v.capacity() << "\n";
    // }
}

int main()
{
    solve();
}