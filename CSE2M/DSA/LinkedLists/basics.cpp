#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define forn(i, n) for (int i = 0; i < n; i++)

struct Node
{
    // public:
    int data;
    struct Node *next;
    Node() { next = nullptr; }
    Node(int d) : data(d) { next = nullptr; }
};

void solve()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
}

int main()
{
    solve();
}