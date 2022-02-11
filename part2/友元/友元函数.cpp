#include <iostream>

using namespace std;

// 友元可以访问类中的私有属性

class Person
{
    // 友元函数可以访问Person类中的私有属性
    friend void showPerson(Person p);

public:
    string name;

    Person()
    {
        name = "张三";
        age = 20;
    }

private:
    int age;
};

void showPerson(Person p)
{
    cout << p.name << endl;
    cout << p.age << endl;
}

int main()
{

    Person p;
    showPerson(p);

    return 0;
}