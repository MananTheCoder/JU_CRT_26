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

vi get_prefix_vector(const vi &v) // O(n*n)/2
{
    vi prefix(v.size()); // O(1)
    forn(i, v.size())    // O(n*n)/2
    {
        int sum = 0;   // O(1)
        forn(j, i + 1) // (i+1)
        {
            sum += v[j]; // O(1)
        }
        prefix[i] = sum; // O(1)
    }
    return prefix; // O(1)
}

vi get_prefix_vector_faster(vi &v) // O(n), SC = O(1)
{
    int sum = 0; // 1 SC
    vi prefix(v.size());
    forn(i, v.size()) // n * 1 = O(n)
    {
        sum += v[i];
        prefix[i] = sum;
    }
    return prefix;
}

vi get_prefix_vector_simplest(vi &v) // O(n), SC: -
{
    vi prefix(v.size());
    prefix[0] = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }
    return prefix;
}

void solve()
{
    vi v = input_vi();
    vi ans = get_prefix_vector(v);
    print_vi(ans);
}

int main()
{
    solve();
}