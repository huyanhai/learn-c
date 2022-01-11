#include <iostream>

using namespace std;

class Person
{
public:
    string name;
    Person()
    {
        cout << "默认构造函数" << endl;
    }

    Person(string name)
    {
        this->name = name;
    }

    Person(const Person &p)
    {
        this->name = p.name;
    }
};

// 带参数的构造函数会覆盖默认你构造函数
// 拷贝构造函数会覆盖默认构造函数

int main()
{
    // 类 "Person" 不存在默认构造函数
    Person p("test");

    cout << p.name << endl;

    return 0;
}