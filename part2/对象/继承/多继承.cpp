#include <iostream>
using namespace std;

class A
{
public:
    string name;
    A()
    {
        name = "a";
    }
};

class B
{
public:
    string name;
    B()
    {
        name = "b";
    }
};

class C
{
public:
    string name;
    C()
    {
        name = "c";
    }
};

class D : public A, public B, public C
{
public:
    string name;
    D()
    {
        name = "d";
    }
};

int main()
{

    D d;

    cout << d.A::name << endl;
    return 0;
}