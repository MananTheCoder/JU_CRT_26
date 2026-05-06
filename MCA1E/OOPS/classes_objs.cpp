#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
    // data members
    int top_speed;
    string brand;
    string model;
    string color;
    double mileage;
    int price;

    // member functions
    void drive()
    {
        cout << "The car is driving.\n";
    }
    void dance()
    {
        cout << "The car is dancing.\n";
    }

    Car()
    {
        //
    }

    Car(string brand, string model, string color, int top_speed)
    {
        cout << "Constructor called.\n";
        this->brand = brand;
        this->model = model;
        this->color = color;
        this->top_speed = top_speed;
    }

    Car(string b, string c, int t) : brand(b), color(c), top_speed(t) {}

    Car(const Car &obj)
    {
        cout << "My copy constructor called.\n";
        this->color = obj.color;
        this->top_speed = obj.top_speed;
        this->brand = obj.brand;
        this->model = obj.model;
        this->mileage = obj.mileage;
        this->price = obj.price;
    }

    ~Car()
    {
        cout << "Destructor called.\n";
    }
};

void creating_objects()
{
    // Car chitransh;
    // chitransh.brand = "BMW";
    // chitransh.model = "M4 Competition";
    // chitransh.color = "Black";
    // chitransh.top_speed = 350;

    // Car aditya(chitransh);
    // cout << aditya.top_speed << "\n";

    Car Ravi("Mahindra", "Scorpio", "Black", 180);
    // cout << &Ravi << "\n";

    Car *shraddha = new Car("Audi", "Navy Blue", 450);
    // cout << shraddha << "\n";
    Car tanishq(*shraddha);
    cout << tanishq.brand << "\n";
}

void playing_with_destructor()
{
    // Car priyanshi;
    {
        Car *priyanshi = new Car("Mercedes", "G Wagon", "Black", 250);
        delete priyanshi;
    }
    cout << "Hello MCA folks!\n";
}

int main()
{
    // creating_objects();
    playing_with_destructor();
}