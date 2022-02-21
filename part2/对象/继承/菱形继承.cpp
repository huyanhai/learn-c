#include <iostream>

using namespace std;

class A
{
public:
    int age;
};

// virtual 虚继承 共用同名属性，解决二义性
class B : virtual public A // virtual 虚继承
{
};

class C : virtual public A // virtual 虚继承
{
};

class D : public B, public C
{
};

int main()
{
    B b;
    C c;
    D d;

    b.age = 1;
    c.age = 2;
    d.age = 12;

    cout << b.age << endl;
    cout << c.age << endl;
    cout << d.age << d.C::age << d.B::age << endl; // 12 12 12,virtual 共用一个基类属性

    return 0;
}