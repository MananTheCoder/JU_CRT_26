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

void reverse(vi &v) // O(n/2)
{
    int n = v.size(); // O(1)
    // for (int low = 0, high = n - 1; low < high; low++, high--)
    for (int low = 0; low < (n - 1) / 2.0; low++) // n/2 *1 = O(n)/2
    {
        swap(v[low], v[n - 1 - low]); // 1
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