#include <bits/stdc++.h>

using namespace std;

class MyF
{
public:
    string name;
    void reads()
    {
        cout << name << " studies hard" << endl;
    }
};

class FriendCharacter : public MyF
{
public:
    FriendCharacter(string character)
    {
        this->name = character;
    }
};

// multiple inheritance
// class Third : public FriendCharacter
// {
// public:
//     string charact;
//     Third(string character) : FriendCharacter(character)
//     {
//         this->charact = character;
//     }

//     void print()
//     {
//         cout << "Third class called" << endl;
//     }
// };

int main()
{
    FriendCharacter obj("alom");
    obj.reads();
    // obj.charact = "she";
    // obj.print();

    return 0;
}