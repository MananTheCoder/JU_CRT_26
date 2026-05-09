// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void arrays()
{
    int n = 5;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void vectors()
{
    int n = 5;
    vector<int> v(5, -1);
    // cout << v.size() << "\n";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    v.pop_back();
    // insert 6 at end.
    v.push_back(6);
    // printing the vector
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "\t";
    }
    cout << "\n";
}

void solve()
{
    vectors();
}

int main()
{
    solve();
}