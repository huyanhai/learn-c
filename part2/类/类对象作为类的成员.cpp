#include <iostream>
using namespace std;

class Phone
{
public:
    string color;
    Phone(string color) : color(color) {}
};

class Person
{
public:
    Phone p;
    Person(string p) : p(p) {}
};

int main()
{
    Person p("红色");

    cout << "手机颜色是:" << p.p.color << endl;

    return 0;
}