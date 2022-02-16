#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    Person()
    {
        age = 10;
    };

    Person &operator++()
    {
        this->age++;
        return *this;
    };
};

ostream &operator<<(ostream &cout, Person &p)
{
    cout << p.age;
    return cout;
}

int main()
{
    Person p;

    cout << ++p << endl;
    cout << p.age << endl;
    return 0;
}