#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define forn(i, n) for (int i = 0; i < n; i++)

vi input_vi()
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

void print_vi(vi &v)
{
    // for (int i = 0; i < v.size(); i++)
    forn(i, v.size())
    {
        cout << v[i] << "\t";
    }
    cout << "\n";
}

void rotate_cw(vi &v) // TC: O(n), SC: 2*O(1)
{
    int n = v.size();               // O(1)
    int temp = v[n - 1];            // O(1)
    for (int i = n - 1; i > 0; i--) // (n-1) * 1 = (n-1)
    {
        v[i] = v[i - 1]; // O(1)
    }
    v[0] = temp; // O(1)
}

void rotate_cw_k(vi &v, int k) // TC: O(nk)
{
    forn(i, k % (int)v.size()) // k * n = O(nk)
    {
        rotate_cw(v); // O(n)
    }
}

void rotate_cw_k_faster(vi &v, int k) // TC: O(n+k), SC: O(k)
{
    int n = v.size(); // SC: O(1)
    k %= n;
    // backup last k elements
    vi backup(k);                   // SC: O(k)
    for (int i = n - k; i < n; i++) // k * 1  = O(k)
    {
        backup[i - (n - k)] = v[i]; // 1
    }

    // shift initial (n-k) to right
    for (int i = n - k - 1; i >= 0; i--) // O(n-k)
    {
        v[i + k] = v[i]; // 1
    }

    // insert backup k elem at first
    forn(i, k) // O(k)
    {
        v[i] = backup[i]; // 1
    }
}

void rotate_cw_k_fastest(vi &v, int k) // O(n), SC: O(1)
{
    reverse(v.begin(), v.end());       // (n/2)
    reverse(v.begin(), v.begin() + k); // (k/2)
    reverse(v.begin() + k, v.end());   // (n-k)/2
}

void solve()
{
    vi v = input_vi();
    int k;
    cin >> k;
    rotate_cw_k_fastest(v, k);
    print_vi(v);
}

int main()
{
    solve();
}