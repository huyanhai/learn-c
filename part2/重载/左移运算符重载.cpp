#include <iostream>
using namespace std;

class Person
{
    friend ostream &operator<<(ostream &cout, Person &p);

public:
    Person(int age, string name)
    {
        this->age = age;
        this->name = name;
    }

private:
    int age;
    string name;
};

ostream &operator<<(ostream &cout, Person &p)
{
    cout << p.age << " " << p.name;
    return cout;
};

int main()
{
    Person p(20, "张三");

    cout << p;

    return 0;
}