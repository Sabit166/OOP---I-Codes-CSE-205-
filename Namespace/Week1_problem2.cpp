#include <bits/stdc++.h>
using namespace std;

namespace bus_space
{
    float travel_time(int velocity)
    {
        return 180.00 / (float)velocity;
    }
}

namespace train_space
{
    float travel_time(int velocity)
    {
        return 180.00 / (float)velocity;
    }
}

int main()
{
    int velocity_bus, velocity_train;
    cout << "Enter velocity of bus: ";
    cin >> velocity_bus;
    cout << "Enter velocity of train: ";
    cin >> velocity_train;
    if (bus_space::travel_time(velocity_bus) < train_space::travel_time(velocity_train))
        cout << "Roadway!";
    else
        cout << "Railway!";
}