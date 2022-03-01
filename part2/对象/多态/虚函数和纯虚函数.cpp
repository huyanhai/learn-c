#include <iostream>
using namespace std;

// 有纯虚函数的类叫抽象类
// 抽象类的派生类需要实现纯虚函数
class Base
{
public:
    virtual void getName() = 0; // 纯虚函数
};

class Son : public Base
{
public:
    void getName()
    {
        cout << "Son getName" << endl;
    }
};

int main()
{
    Base *b = new Son;
    b->getName();
    return 0;
}