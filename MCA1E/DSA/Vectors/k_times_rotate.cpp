// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>
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

void rotate_vec(vi &v) // (n+2) ~ O(n)
{
    int n = v.size(); // O(1)
    // take backup of last element
    int temp = v[n - 1]; // 1

    // shift the first (n-1) elem to right
    for (int i = n - 1; i > 0; i--) // (n-1)
    {
        v[i] = v[i - 1];
    }

    // inset backup at begin
    v[0] = temp; // 1
}

void rotate_vec(vi &v, int k) // O(n*k)
{
    while (k--) // k * n
    {
        rotate_vec(v); // O(n)
    }
}

void rotate_vec_faster(vi &v, int k) // O(n+k); SC: O(k)
{
    int n = v.size();
    k %= n;
    // take backup of k elems
    vi backup(k);
    for (int i = n - k; i < n; i++) // k
    {
        backup[i - (n - k)] = v[i];
    }

    // shift (n-k) elem to right by k
    for (int i = n - k - 1; i >= 0; i--) // (n-k)
    {
        v[i + k] = v[i];
    }

    // insert k elem at beginning
    forn(i, k) // k
    {
        v[i] = backup[i];
    }
}

void rotate_vec_fastest(vi &v, int k) // O(n), SC: -/O(1)
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
    rotate_vec_fastest(v, k);
    print_vi(v);
}

int main()
{
    solve();
}