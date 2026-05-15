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

void insertion_sort(vi &v)
{
    int counter = 0;
    for (int i = 1; i < v.size(); i++)
    {
        for (int j = i - 1; (j >= 0); j--)
        {
            counter++;
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
            else
            {
                break;
            }
        }
    }
    cout << counter << "\n";
}

void insertion_sort_shraddha(vi &v)
{
    int counter = 0;
    for (int i = 1; i < v.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            counter++;
            if (v[j] > v[i])
            {
                swap(v[j], v[i]);
            }
        }
    }
    cout << counter << "\n";
}

void solve()
{
    vi v = input_vi();
    insertion_sort(v);
    print_vi(v);
}

int main()
{
    solve();
}