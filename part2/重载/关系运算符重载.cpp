#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    Person(int age)
    {
        this->age = age;
    }

    void operator<=(Person &p)
    {
        if (age <= p.age)
        {
            cout << "小于或等于" << endl;
        }
        else
        {
            cout << "大于" << endl;
        }
    }
};

int main()
{
    Person p1(10);
    Person p2(20);

    p1 <= p2;

    return 0;
}