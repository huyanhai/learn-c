#include <iostream>

using namespace std;

class Person
{
public:
    int age;

    Person()
    {
        age = 10;
    }

    Person operator+(Person &p)
    {
        Person temp;
        temp.age = temp.age + p.age;
        return temp;
    }
};

int main()
{
    Person p1;

    Person p2 = p1 + p1;

    cout << p2.age << endl;
    return 0;
}