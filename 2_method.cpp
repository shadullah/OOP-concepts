#include <bits/stdc++.h>

using namespace std;

class Testing_obj
{
public:
    // method
    void res()
    {
        cout << "My MEthod\n";
    }

    // constructor
    int my_val;
    Testing_obj(int v)
    {
        my_val = v;
        cout << "constructor called\n";
    }
};

int main()
{
    Testing_obj obj(5);
    obj.res();
    obj.my_val = 120;
    cout << obj.my_val;
    return 0;
}