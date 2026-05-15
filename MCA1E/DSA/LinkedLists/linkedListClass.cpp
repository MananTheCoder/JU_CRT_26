#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;

#define forn(i, n) for (int i = 0; i < n; i++)
#define forLL(curr) for (struct Node *curr = head; curr != nullptr; curr = curr->next)

struct Node
{
    int data;
    struct Node *next;
    Node() : next(nullptr) {}
    Node(int d) : data(d), next(nullptr) {}
};

class LinkedList
{
public:
    struct Node *head;
    LinkedList() : head(nullptr) {}
    LinkedList(Node *h) : head(h) {}

    void insertNodeTail(int val);
    void deleteNode(int pos);
    void print();
    bool search(int target);
    int length();
};

void LinkedList::insertNodeTail(int val)
{
    if (head == nullptr)
    {
        head = new Node(val);
        return;
    }
    Node *curr = head;
    while (curr->next != nullptr)
    {
        curr = curr->next;
    }
    curr->next = new Node(val);
}

void LinkedList::print()
{
    // struct Node *curr = head;
    // while (curr != nullptr)
    // {
    //     cout << curr->data << " ";
    //     curr = curr->next;
    // }

    // for (struct Node *curr = head; curr != nullptr; curr = curr->next)
    forLL(curr)
    {
        cout << curr->data << " ";
    }
    cout << '\n';
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
        cout << "list is empty, can't delete.\n";
        return;
    }
    if (pos < 1)
    {
        cout << "Index doesn't exist.\n";
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
        struct Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    struct Node *curr = head;
    forn(i, pos - 2)
    {
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
}

void solve()
{
    LinkedList list1;
    forn(i, 8)
    {
        list1.insertNodeTail(i + 1);
    }
    list1.deleteNode(3);
    list1.insertNodeTail(9);
    list1.deleteNode(1); // 2 4 5 6 7 8 9
    list1.deleteNode(0); // Index doesn't exist.
    list1.deleteNode(8); // Out of bound
    list1.deleteNode(7); // 2 4 5 6 7 8
    list1.print();
    // list1.print();
    // cout << list1.search(3) << "\t" << list1.search(6) << "\n"; // 1 0
    // cout << list1.length() << "\n";                             // 5
}

int main()
{
    solve();
}