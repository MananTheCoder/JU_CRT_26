#include <bits/stdc++.h>
using namespace std;

class Car
{
private:
    int emi;

public:
    // data members
    int top_speed;
    string brand;
    string model;
    string color;
    double mileage;

    Car() {}

    Car(string b, string m, string c, int t) : brand(b), model(m), color(c), top_speed(t) {}

    Car(string b, string c, int t) : brand(b), color(c), top_speed(t) {}

    Car(const Car &obj)
    {
        // cout << "My copy constructor called.\n";
        this->color = obj.color;
        this->top_speed = obj.top_speed;
        this->brand = obj.brand;
        this->model = obj.model;
        this->mileage = obj.mileage;
        this->emi = obj.emi;
    }

    void set_emi(int emi)
    {
        this->emi = emi;
    }

    int get_emi()
    {
        return this->emi;
    }
};

void encapsulation()
{
    Car utkarsh("Suzuki", "Wagon R", "White", 450);
    utkarsh.set_emi(4655);
    cout << utkarsh.get_emi() << "\n";
}

int main()
{
    encapsulation();
}