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

int find_mode(const vi &v)
{
    unordered_map<int, int> freq_map;
    forn(i, v.size())
    {
        // int elem = v[i];
        freq_map[v[i]]++;
    }
    int max_freq = 0, mode = -1;
    for (auto [key, freq] : freq_map)
    {
        if (freq > max_freq)
        {
            max_freq = freq;
            mode = key;
        }
        cout << key << "\t" << freq << "\n";
    }
    return mode;
}

void solve()
{
    vi v = input_vi();
    cout << find_mode(v) << "\n";
}

int main()
{
    solve();
}