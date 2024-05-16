#include <bits/stdc++.h>

using namespace std;

class Vehicle
{
public:
    string name, price;
    void print()
    {
        cout << name << " price is " << price << endl;
    }
};

class Bus : public Vehicle
{
public:
    string seat_numbrs;

    void print_seat_no()
    {
        cout << "Total seats " << seat_numbrs << endl;
    }
};

class Acbus : public Bus
{
public:
    string temp;

    Acbus(string name, string price, string seat_numbrs, string temp)
    {
        this->name = name;
        this->price = price;
        this->seat_numbrs = seat_numbrs;
        this->temp = temp;
    }

    void print_temp()
    {
        cout << "Temp " << temp << endl;
    }
};

int main()
{
    Acbus obj("ENA", "5000000", "24", "20");
    // obj.name = "Greenline";
    // obj.price = "20000000";
    // obj.seat_numbrs = "15";
    // obj.temp = "42";

    obj.print();
    obj.print_seat_no();
    obj.print_temp();
    return 0;
}