#include <iostream>
using namespace std;

// 有继承关系
// 子类重写父类虚函数

class A
{
public:
    // 加上virtual后，在运行时才确
    virtual void do_something()
    {
        cout << "A:do" << endl;
    };
};

class B : public A
{
public:
    void do_something()
    {
        cout << "B:do" << endl;
    };
};
// 执行这个函数
// 地址早绑定 在编译阶段确定函数地址，
// 如果想执行让b输出，那么这个地址就不能早绑定，需要在运行时绑定地址
// 动态多态使用，父类的指针或引用 执行子类对象
void speak(A &a)
{
    a.do_something();
};

int main()
{
    B b;

    speak(b);

    return 0;
}