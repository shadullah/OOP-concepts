#include <bits/stdc++.h>

using namespace std;

class Family
{
public:
    string address;
    void pri_add()
    {
        cout << address << endl;
    }
};

class College
{
public:
    string clg_name;
    void pri_clg()
    {
        cout << clg_name << endl;
    }
};

class Student : public Family, public College
{
public:
    string name;
    Student(string address, string clg_name, string name)
    {
        this->address = address;
        this->clg_name = clg_name;
        this->name = name;
    }

    void pri()
    {
        cout << name << endl;
    }
};

int main()
{
    Student s("shyamoli", "SUST", "Sakib");
    s.pri_add();
    s.pri_clg();
    s.pri();

    return 0;
}