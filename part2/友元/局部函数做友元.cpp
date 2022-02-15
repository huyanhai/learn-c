#include <iostream>
using namespace std;

class Person;

class Demo
{
public:
    Person *p;
    Demo()
    {
        p = new Person();
    }

    void showInfo()
    {
        cout << p->name << endl;
        // cout << p->age << endl;
    }
};

class Person
{
    friend void Demo::showInfo();

public:
    string name;
    Person()
    {
        name = "测试";
        age = 20;
    }

private:
    int age;
};

int main()
{
    Demo d;
    d.showInfo();
    return 0;
}