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

int fib(int n)
{
    // Base Case
    if (n < 2)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int memo_helper(int n, vi &memo)
{
    if (memo[n] != -1)
    {
        return memo[n];
    }
    memo[n] = memo_helper(n - 1, memo) + memo_helper(n - 2, memo);
    return memo[n];
}

int fib_memoization(int n)
{
    vi memo(n + 1, -1);
    memo[0] = 0, memo[1] = 1;
    return memo_helper(n, memo);
}

int tabulation(int n)
{
    vi dp(n + 1, -1);
    dp[0] = 0, dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

void solve()
{
    int n;
    cin >> n;
    cout << tabulation(n) << "\n";
}

int main()
{
    solve();
}