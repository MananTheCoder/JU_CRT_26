#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef map<string, vs> msvs;

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

void print_map(msvs &crush_map)
{
    cout << "Student\t\tCrush List\n";
    for (msvs::iterator itr = crush_map.begin(); itr != crush_map.end(); itr++)
    {
        cout << (itr->first) << ":\t";
        if (itr->first != "Anushka" && itr->first != "Tanishq")
        {
            cout << "\t";
        }
        for (string crush : itr->second) // itr->second = crush_list
        {
            cout << crush << ", ";
        }
        cout << "\n";
    }
}

void populate_map(map<string, vs> &crush_map)
{
    // way 1
    crush_map["Divyam"] = {"Jivesh", "Priyanshi", "Osheen", "Rishita", "Saurabh"};
    crush_map["Ronak"] = {"Jivesh", "Rishita"};
    crush_map["Ayush"] = {"Osheen", "Saurabh"};
    crush_map["Tanishq"] = {"Rishita"};
    crush_map["Anushka"] = {"Jivesh", "Saurabh"};
}

void solve()
{
    map<string, vector<string>> crush_map;
    populate_map(crush_map);
    print_map(crush_map);
}

int main()
{
    solve();
}