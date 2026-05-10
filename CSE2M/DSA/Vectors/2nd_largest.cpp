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

int largest(vi &v, int skip) // O(n)
{
    int _max = INT_MIN;
    forn(i, v.size()) // n * 1 = O(n)
    {
        if (v[i] != skip)
        {
            _max = max(_max, v[i]);
        }
    }
    return _max;
}

int max_single_loop_2(vi &v) // O(n)
{
    int _max = INT16_MIN, _max2 = INT_MIN;
    forn(i, v.size()) // O(n)
    {
        if (v[i] > _max)
        {
            _max2 = _max;
            _max = v[i];
        }
        else if (v[i] < _max)
        {
            _max2 = max(_max2, v[i]);
        }
    }
    return _max2;
}

void solve() // 2*O(n)
{
    vi v = input_vi();
    // int _max = largest(v, -1);        // O(n)
    cout << max_single_loop_2(v) << "\n"; // O(n)
}

int main()
{
    solve();
}