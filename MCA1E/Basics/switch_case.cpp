#include <bits/stdc++.h>
using namespace std;

int a = 1;

void fun2(int a)
{
    for (int i = 1; i <= 10; i++)
    {
        // a = 3;
        a++;
    }
}

void fun1()
{
    // int a = 3;
    fun2(a);
    a -= 3;
    cout << a << "\n";
}

int main()
{
    // int a = 1;
    // switch (a)
    // {
    // case 1:
    // {
    //     cout << "1\n";
    //     break;
    // }
    // case 2:
    // {
    //     cout << "2\n";
    //     break;
    // }
    // default:
    // {
    //     cout << "Invalid arg\n";
    // }
    // }

    int n;
    cin >> n;
    string ans = n % 2 == 0 ? "Even" : "Odd";
    cout << ans << endl;
}