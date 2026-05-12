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

bool isAnagram(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }
    int count[26] = {0};
    for (char c : a)
    {
        count[c - 'a']++;
    }
    for (char c : b)
    {
        count[c - 'a']--;
    }
    forn(i, 26)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    string a, b;
    cin >> a >> b;
    cout << isAnagram(a, b) << "\n";
}

int main()
{
    solve();
}