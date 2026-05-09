#include <bits/stdc++.h>
using namespace std;

struct Game
{
    int level;
    int no_of_players;
    int jersey_no;

    Game()
    {
        //
    }
    Game(int level, int no_of_players, int jersey_no)
    {
        this->level = level;
        this->no_of_players = no_of_players;
        this->jersey_no = jersey_no;
    }
};

// void initialise_game()

void pointer_in_struct()
{
    // Game *fifa = new Game(1, 22, 7);
    // Game *cricket = new Game(10, 11, 7);
    Game fifa(1, 22, 7);
    Game cricket(10, 11, 7);
    cout << (&fifa - &cricket) << "\n";
    // cout << (*fifa).level << "\n";
    // cout << fifa->jersey_no << '\n';
    // cout << sizeof(fifa) << "\n";
    // cout << sizeof(*fifa) << "\n";

    // compile time execution
    // Game cricket(10, 11, 7);
}

void basics()
{
    int a = 5;
    double d = 12;
    int *ptr_a = &a;
    double *ptr_d = &d;
    // int *ptr_b = &b;
    cout << ptr_a << "\n";
    cout << (ptr_d) << "\n";
}

void pointers_in_arrays()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        a[i] = 10 + 2 * i;
    } // 10 12 14 16 18
    int *ptr_a1 = &a[0];
    int *ptr_a5 = &a[4];
    // cout << *(a + 1) << "\n";
    // cout << a[1] << "\n";
    // cout << ptr_a1 << "\n";
    ptr_a5 = a + 2;
    ;
    // cout << a[-1000] << "\n";
    // cout << . a) << "\n";
    // cout << a << "\n";

    // increment case
    // club asterisk and &
    cout << (++(*ptr_a5)) << "\t" << (*(++ptr_a5)) << '\n';
    // cout << a[1] << "\n";
}

void array_of_pointer()
{
    int n = 5;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 10 + 2 * i;
    } // 10 12 14 16 18
    int *ptrs[n];
    for (int i = 0; i < n; i++)
    {
        ptrs[i] = &a[i];
    }
    *ptrs[0] = 15;
    for (int i = 0; i < n; i++)
    {
        cout << (*ptrs[i]) << "\t";
    }
    cout << "\n";
}

int main()
{
    pointer_in_struct();
}