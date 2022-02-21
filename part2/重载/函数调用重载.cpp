#include <iostream>
using namespace std;

class Person
{
public:
    int age;

    void operator()(int age)
    {
        this->age = age;
    }
};

int main()
{
    Person p;

    p(20);

    cout << p.age << endl;

    return 0;
}