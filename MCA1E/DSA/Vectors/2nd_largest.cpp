// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>
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

int largest2(const vi &v)
{
    int _max = INT_MIN;
    forn(i, v.size())
    {
        // if (v[i] > _max)
        // {
        //     _max = v[i];
        // }
        // _max = (v[i] > _max) ? v[i] : _max;
        _max = max(_max, v[i]);
    }
    int _max2 = INT_MIN;
    forn(i, v.size())
    {
        if (v[i] != _max)
        {
            _max2 = max(_max2, v[i]);
        }
    }
    return _max2;
}

int largest2_single_loop(const vi &v)
{
    int _max = INT_MIN, _max2 = INT_MIN;
    forn(i, v.size())
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
    return (_max2 == INT_MIN) ? -1 : _max2;
}

void solve()
{
    vi v = input_vi();
    cout << largest2_single_loop(v) << "\n";
}

int main()
{
    solve();
}