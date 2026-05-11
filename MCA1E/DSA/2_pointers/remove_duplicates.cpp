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

int remove_duplicates(vi &v) // O(n)
{
    int d = 0;
    // while (i < v.size())
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] != v[d])
        {
            v[++d] = v[i];
        }
    }
    return (d + 1);
}

void solve()
{
    vi v = input_vi();
    int k = remove_duplicates(v);
    cout << "----------Answer----------\n";
    cout << k << "\n";
    // printing the first k elem of new vector
    forn(i, k)
    {
        cout << v[i] << "\t";
    }
    cout << "\n";
}

int main()
{
    solve();
}