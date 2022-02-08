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

    Person &addAge(Person &p)
    {
        // this指向调用该函数的对象
        this->age += p.age;
        return *this;
    }
};

int main()
{
    Person p1(10);

    Person p2(10);

    p2.addAge(p1).addAge(p1).addAge(p1);

    cout << "p2的年龄为：" << p2.age << endl;

    return 0;
}