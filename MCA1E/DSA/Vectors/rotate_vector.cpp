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

void rotate_vec(vi &v) // (n+2) ~ O(n)
{
    int n = v.size(); // O(1)
    // take backup of last element
    int temp = v[n - 1]; // 1

    // shift the first (n-1) elem to right
    for (int i = n - 1; i > 0; i--) // (n-1)
    {
        v[i] = v[i - 1];
    }

    // inset backup at begin
    v[0] = temp; // 1
}

void solve()
{
    vi v = input_vi();
    rotate_vec(v);
    print_vi(v);
}

int main()
{
    solve();
}