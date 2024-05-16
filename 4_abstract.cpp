#include <bits/stdc++.h>

using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Circle" << endl;
    }

    void some()
    {
        cout << "some";
    }
};

int main()
{
    Circle obj;
    obj.draw();
    
    return 0;
}