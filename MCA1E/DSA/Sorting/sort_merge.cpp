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

void merge(vi &v, int l, int r)
{
    int mid = (l + r) / 2;
    int m = mid - l + 1, n = r - mid;
    vi c(m + n);
    int i = l, j = mid + 1, k = 0;
    while (i <= mid || j <= r)
    {
        if (j > r || ((i <= mid) && v[i] < v[j]))
        {
            c[k++] = v[i++];
        }
        else
        {
            c[k++] = v[j++];
        }
    }
    // while (j <= r)
    // {
    //     c[k++] = v[j++];
    // }
    // while (i <= mid)
    // {
    //     c[k++] = v[i++];
    // }
    for (int i = l; i <= r; i++)
    {
        v[i] = c[i - l];
    }
}

void merge_sort(vi &v, int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = (l + r) / 2;
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