#include <iostream>
using namespace std;

class Father
{
public:
    int age;
    Father()
    {
        age = 100;
    }

    void show()
    {
        cout << "Father show():" << age << endl;
    }

    void show(int age)
    {
        cout << "Father show(int age):" << age << endl;
    }
};

class Son : public Father
{
public:
    int age;
    Son()
    {
        age = 200;
    }

    void show()
    {
        cout << "Son show():" << age << endl;
    }
};

int main()
{
    Son s;

    cout << s.age << endl;
    cout << s.Father::age << endl; // 访问父类的属性

    // 子类中出现父类的同名函数时，子类会隐藏父类的所有同名函数包括重载
    // s.show(10);
    s.show();

    return 0;
}