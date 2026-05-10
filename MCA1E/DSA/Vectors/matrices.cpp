// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

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
    // for (int i : v)
    // {
    //     cout << i << "\t";
    // }
    cout << "\n";
}

void print_vvi(const vvi &matrix)
{
    // forn(i, matrix.size())
    // {
    //     print_vi(matrix[i]);
    // }
    // for (auto i : matrix)
    // {
    // }
    for (const vi &row : matrix)
    {
        print_vi(row);
    }
}

void populate_matrix_horizontally(vvi &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    int count = 1;
    forn(i, m)
    {
        // loop over a row
        forn(j, n)
        {
            matrix[i][j] = count++;
        }
    }
}

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<vi> matrix(m, vi(n));
    populate_matrix_horizontally(matrix);
    print_vvi(matrix);
}

int main()
{
    solve();
}