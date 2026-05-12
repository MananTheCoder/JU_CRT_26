#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef unordered_map<int, int> mii;
typedef vector<string> vs;
typedef unordered_map<string, vs> msvs;

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

void printing_map(msvs &crush_map)
{
    cout << "Student\t\tCrushes\n";
    for (pair<const string, vs> &row : crush_map)
    {
        string student = row.first;
        vs &crush_list = row.second;
        cout << student << ":\t";
        if (student != "Siddarth" && student != "Suryaveer")
        {
            cout << "\t";
        }
        for (string &crush : crush_list)
        {
            cout << crush << ", ";
        }
        cout << "\n";
    }
}

void populating_map(unordered_map<string, vs> &crush_map)
{
    crush_map["Siddarth"] = {"Mahak", "Jahnvi", "Monali"};
    crush_map["Suryaveer"] = {"Jahnvi"};
    crush_map["Vivek"] = {"Mehul", "Keshav"};
    crush_map["Vikram"] = {"Keshav", "Monali", "Vishal"};
    crush_map["Avisha"] = {"Mahak"};
}

void solve()
{
    unordered_map<string, vs> crush_map;
    populating_map(crush_map);
    printing_map(crush_map);
}

int main()
{
    solve();
}