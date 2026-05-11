#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

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

void print_vi(const vi &v)
{
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << "\t";
    // }
    for (int x : v)
    {
        cout << x << "\t";
    }
    cout << "\n";
}

void print_vvi(const vvi &matrix)
{
    // forn(i, matrix.size())
    // {
    // matrix[i]
    // forn(j, matrix[0].size())
    // {
    //     cout << matrix[i][j] << "\t";
    // }
    // cout << "\n";
    // print_vi(matrix[i]);
    // }
    for (const vi &row : matrix)
    {
        print_vi(row);
    }
}

void fill_matrix_horizontally(vvi &matrix)
{
    int num = 1;
    int rows = matrix.size(), cols = matrix[0].size();
    forn(i, rows)
    {
        forn(j, cols)
        {
            matrix[i][j] = num++;
        }
    }
}

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<vi> matrix(m, vi(n));
    fill_matrix_horizontally(matrix);
    print_vvi(matrix);
}

int main()
{
    solve();
}