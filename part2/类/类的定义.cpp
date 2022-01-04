#include <iostream>

using namespace std;

// public 可以在类的内部使用和外部使用
// private 只能在类内部使用或者在类的子类中使用
// protected 只能在类内部使用

class Person
{
protected:
    int age;

private:
    string name;

public:
    Person(string name);
    ~Person();

    string show_name()
    {
        return this->name;
    }
};

Person::Person(string name)
{
    this->name = name;
    cout << "构造函数执行" << endl;
}

Person::~Person()
{
    cout << "析构函数执行" << endl;
}

int main()
{

    Person p("demo"); // 实例化类

    // p.name; 访问报错
    // p.age; 访问报错

    cout << p.show_name() << endl; // 调用类的public方法
    return 0;
}