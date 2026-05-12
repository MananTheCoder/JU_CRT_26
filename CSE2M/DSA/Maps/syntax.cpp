#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;

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

void printing_map(mii &plus1)
{
    cout << "Key\tValue\n";
    // way 1
    // for (mii::iterator itr = plus1.begin(); itr != plus1.end(); itr++)
    // {
    //     // pair<int, int> key_value = *itr;
    //     // int key = key_value.first;
    //     // int val = key_value.second;
    //     // cout << key << "\t" << val << "\n";
    //     cout << (*itr).first << "\t" << itr->second << "\n";
    // }

    // Way 2
    // for (pair<const int, int> &row : plus1)
    // {
    //     cout << row.first << '\t' << row.second << "\n";
    // }

    // way 3
    // structured key binding
    for (auto [key, value] : plus1)
    {
        cout << key << "\t" << value << "\n";
    }
}

void populating_map(map<int, int> &plus1)
{
    plus1[1] = 2;
    plus1.insert({2, 3});
    plus1.insert(make_pair(3, 4));
    pair<int, int> p = {4, 5};
    plus1.insert(p);
}

void solve()
{
    map<int, int> plus1;
    populating_map(plus1);
    printing_map(plus1);
}

int main()
{
    solve();
}