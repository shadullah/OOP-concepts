#include <bits/stdc++.h>

using namespace std;

class A
{
    string dept;

public:
    int value;
    A(int v)
    {
        this->value = v;
    }

    void setter(string d)
    {
        dept = d;
    }

    void getter()
    {
        cout << dept << endl;
    }

    string getD()
    {
        return dept;
    }
};

int main()
{
    A obj(10);
    // obj.value = 5;
    obj.setter("math");
    obj.getter();
    cout << obj.getD() << endl;

    return 0;
}
