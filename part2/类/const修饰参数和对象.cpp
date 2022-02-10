#include <iostream>

using namespace std;

class Person
{
public:
    string name;
    mutable int age;

    Person(){};

    // 常函数
    // const 修饰的函数，里面的值不能修改
    // void setName() const => const Person * const this
    void setName() const
    {
        // name 修改报错 const修饰 this指针不能修改指向
        // this->name = "xxx";

        // 加mutable属性的属性，在const修饰的函数中可以修改值
        this->age = 20;
        cout << this->age << endl;
    }

    void setAge()
    {
        cout << "setAge" << endl;
    }
};

int main()
{
    // Person p;

    // 常对象
    const Person p1;
    // 常对象的属性不能修改
    // p1.name = "aaa";

    // mutable修饰可以修改
    p1.age = 12;

    // 常对象只能调用常函数
    p1.setName();
    // p1.setAge();
    return 0;
}