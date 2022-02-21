#include <iostream>
using namespace std;

class A
{
public:
    string a;

    A()
    {
        a = 'a';
        b = 'b';
        c = 'c';
    }

protected:
    string b;

private:
    string c;
};

// 公共继承
// 继承后父类的属性，在子类中，public => public, protected => protected, private => 不可访问
class B : public A
{
public:
    B()
    {
        cout << "a:" << a << " b:" << b << endl;
        // cout << "c:" << c << endl; 访问c报错
    }
};

// 保护继承
// 继承后父类属性，在子类中，public => protected, protected => protected, private => 不可访问
class C : protected A
{
public:
    C()
    {
        cout << "a:" << a << " b:" << b << endl;
        // cout << "c:" << c << endl; 访问c报错
    }
};

// 私有继承
// 继承后父类属性,在子类中， public => private, protected => private, private => 不可访问
class D : private A
{
public:
    D()
    {
        cout << "a:" << a << " b:" << b << endl;
        // cout << "c:" << c << endl; 访问c报错
    }
};
int main()
{
    B b;
    C c;
    D d;
    return 0;
}