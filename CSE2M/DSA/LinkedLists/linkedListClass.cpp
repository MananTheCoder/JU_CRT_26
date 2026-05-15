#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define forn(i, n) for (int i = 0; i < n; i++)
#define forLL(curr) for (Node *curr = head; curr; curr = curr->next)

struct Node
{
    // public:
    int data;
    struct Node *next;
    Node() { next = nullptr; }
    Node(int d) : data(d) { next = nullptr; }
};

class LinkedList
{
public:
    Node *head;
    LinkedList() { head = nullptr; }
    LinkedList(Node *h) : head(h) {}

    void insertNodeTail(int val);
    void deleteNode(int pos);
    void print();
    bool search(int target);
    int length();
};

void LinkedList::insertNodeTail(int val)
{
    if (!head)
    {
        head = new Node(val);
        return;
    }
    Node *curr = head;
    while (curr->next)
    {
        curr = curr->next;
    }
    curr->next = new Node(val);
    return;
}

void LinkedList::print()
{
    // Node *temp = head;
    // while (temp)
    // {
    //     cout << temp->data << "\t";
    //     temp = temp->next;
    // }

    forLL(curr)
    {
        cout << curr->data << "\t";
    }
    cout << "\n";
}

bool LinkedList::search(int target)
{
    forLL(curr)
    {
        if (curr->data == target)
        {
            return true;
        }
    }
    return false;
}

int LinkedList::length()
{
    int count = 0;
    forLL(curr)
    {
        count++;
    }
    return count;
}

void LinkedList::deleteNode(int pos)
{
    if (!head)
    {
        cout << "List is empty, can't delete.\n";
        return;
    }
    if (pos < 1)
    {
        cout << "Pos can't be < 1.\n";
        return;
    }
    int _length = length();
    if (pos > _length)
    {
        cout << "Index out of bound.\n";
        return;
    }
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node *curr;
    for (curr = head; pos - 2; curr = curr->next, pos--)
    {
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
}

void solve()
{
    LinkedList list1;
    // list1.insertNodeTail(1);
    forn(i, 5)
    {
        list1.insertNodeTail(i + 1);
    }
    list1.deleteNode(5);
    list1.print();
    // cout << list1.search(4) << "\n";
    // cout << list1.length() << "\n";
}

int main()
{
    solve();
}