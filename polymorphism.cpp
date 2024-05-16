#include <bits/stdc++.h>

using namespace std;

class Shape
{
public:
    // int area = 120;
    // string name;
    void find_area()
    {
        cout << "dhera first";
    }
};

class Circle : public Shape
{
public:
    Circle(const string &name) : radi(name) {}

    string radi;
    void find_area()
    {
        cout << "circle here";
    }
};

class Hi : public Shape
{
public:
    Hi(const string &name) {}

    // string some;
};

int main()
{
    // Circle obj1("ji i want string here");
    // obj1.find_area();

    Hi obj2("sdg");
    obj2.find_area();

    return 0;
}