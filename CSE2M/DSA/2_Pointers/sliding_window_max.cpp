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

vi maxSlidingWindow(vi &v, int k) // O(n * lg(k))
{
    vi ans;
    map<int, int, greater<int>> freq;
    forn(i, k) // k * log(k)
    {
        freq[v[i]]++; // O(logk)
    }
    ans.push_back(freq.begin()->first);
    for (int i = k; i < v.size(); i++) // (n-k) * (lg k)
    {
        freq[v[i]]++;            // O(lg k)
        freq[v[i - k]]--;        // O(lg k)
        if (freq[v[i - k]] == 0) // O(lg k)
        {
            freq.erase(v[i - k]); // O(lg k)
        }
        ans.push_back(freq.begin()->first);
    }
    return ans;
}

void solve()
{
    vi v = input_vi();
    int k;
    cin >> k;
    vi ans = maxSlidingWindow(v, k);
    print_vi(ans);
}

int main()
{
    solve();
}