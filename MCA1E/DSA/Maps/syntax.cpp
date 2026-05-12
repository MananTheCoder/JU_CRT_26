#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;

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

void print_map(mii &plus1)
{
    cout << "Key\tValue\n";
    // Way 1
    // for (mii::iterator itr = plus1.begin(); itr != plus1.end(); itr++)
    // {
    //     // pair<int, int> p = *itr;
    //     // int key = p.first;
    //     // int value = p.second;
    //     // cout << key << "\t" << value << "\n";
    //     cout << itr->first << "\t" << itr->second << "\n";
    // }

    // way 2
    // for (pair<int, int> p : plus1)
    // {
    //     cout << p.first << "\t" << p.second << "\n";
    // }

    for (auto [key, value] : plus1)
    {
        cout << key << "\t" << value << "\n";
    }
}

void populate_map(map<int, int> &plus1)
{
    // way 1
    // map_name[key] = value;
    plus1[0] = 1;
    plus1[1] = 2;

    // way 2
    pair<int, int> p = {-1, 0};
    plus1.insert(p);

    // way 3
    plus1.insert(make_pair(3, 4));
}

void solve()
{
    map<int, int> plus1;
    populate_map(plus1);
    print_map(plus1);
}

int main()
{
    solve();
}