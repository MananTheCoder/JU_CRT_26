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

void merge(vi &v, int l, int r)
{
    int mid = l + (r - l) / 2;
    // l -> m, m+1 --> r sorted
    vi c(r - l + 1);
    int i = l, j = mid + 1, k = 0;
    while (i <= mid && j <= r)
    {
        if (v[i] <= v[j])
        {
            c[k++] = v[i++];
        }
        else
        {
            c[k++] = v[j++];
        }
    }
    while (i <= mid)
    {
        c[k++] = v[i++];
    }
    while (j <= r)
    {
        c[k++] = v[j++];
    }
    forn(i, r - l + 1)
    {
        v[i + l] = c[i];
    }
}

void merge_sort(vi &v, int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = l + (r - l) / 2;
    merge_sort(v, l, mid);
    merge_sort(v, mid + 1, r);
    merge(v, l, r);
}

void solve()
{
    vi v = input_vi();
    merge_sort(v, 0, v.size() - 1);
    print_vi(v);
}

int main()
{
    solve();
}