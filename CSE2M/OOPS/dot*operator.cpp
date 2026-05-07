#include <bits/stdc++.h>
using namespace std;

struct Robot
{
    int batteryLevel = 85;
    void speak() { cout << "Robot: Hello!" << endl; }
};

int main()
{
    Robot myBot;

    // int Robot::*ptr = &Robot::batteryLevel;
    int Robot::*pBattery = &Robot::batteryLevel;

    // 2. Create a pointer to a member function
    void (Robot::*pAction)() = &Robot::speak;
    (myBot.*pAction)();

    // --- Using the .* operator ---

    // Accessing the data member: (object.*pointer)
    cout << "Battery: " << (myBot.*pBattery) << "%" << std::endl;

    // Calling the member function: (object.*pointer)()
    (myBot.*pAction)();

    return 0;
}