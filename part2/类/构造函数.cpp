#include <iostream>

using namespace std;

class Person
{
private:
    string name;

public:
    Person()
    {
        cout << "调用默认构造函数" << endl;
    }
    // 构造函数重载
    Person(string name)
    {
        this->name = name;
    }

    // 拷贝构造函数
    Person(const Person &p)
    {
        name = p.name;
    }

    string showName()
    {
        return name;
    }

    ~Person()
    {
        cout << "调用析构函数" << endl;
    }
};

int main()
{
    Person p("张三");
    Person p1 = p;

    cout << "p:" << p.showName() << endl;
    cout << "p1:" << p1.showName() << endl;

    return 0;
}