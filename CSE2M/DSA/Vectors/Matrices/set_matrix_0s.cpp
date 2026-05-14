#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;

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

vvi input_matrix()
{
    int m, n;
    cin >> m >> n;
    vvi matrix(m, vi(n));
    forn(i, m)
    {
        forn(j, n)
        {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

void print_vi(vi &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    cout << "\n";
}

void print_vvi(vvi &matrix)
{
    for (vi &row : matrix)
    {
        print_vi(row);
    }
}

void set_row0(int row, vvi &matrix) // O(n)
{
    forn(i, matrix[0].size()) // n
    {
        matrix[row][i] = 0;
    }
}

void set_col0(int col, vvi &matrix) // O(m)
{
    forn(j, matrix.size())
    {
        matrix[j][col] = 0;
    }
}

void setZeroes(vvi &matrix)
{ // mn(m+n) -> 3 * O(mn) ; SC:O(m+n)
    int m = matrix.size(), n = matrix[0].size();
    vb rows(m, false), cols(n, false);
    forn(i, m) // m * n
    {
        forn(j, n) // n
        {
            if (matrix[i][j] == 0)
            {
                // set_row0(i, matrix); // O(n)
                // set_col0(j, matrix); // O(m)
                rows[i] = true;
                cols[j] = true;
            }
        }
    }
    forn(i, m) // O(m*n)
    {
        if (rows[i] == true)
        {
            set_row0(i, matrix); // n
        }
    }
    forn(i, n) // O(m*n)
    {
        if (cols[i] == true)
        {
            set_col0(i, matrix); // O(m)
        }
    }
}

void solve()
{
    vvi matrix = input_matrix();
    setZeroes(matrix);
    print_vvi(matrix);
}

int main()
{
    solve();
}