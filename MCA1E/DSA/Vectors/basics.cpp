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
    int n;
    cin >> n;
    int sum = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
        sum += v[i];
    }
    v.pop_back();
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\t';
    }
    cout << "\n";
}

int main()
{
    // vectors();
}