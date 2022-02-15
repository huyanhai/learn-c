#include <iostream>
using namespace std;

class Demo;

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
    }
};

void Demo::showInfo()
{
    cout << p->name << endl;
    cout << p->age << endl;
}

int main()
{
    Demo d;
    d.showInfo();
    return 0;
}