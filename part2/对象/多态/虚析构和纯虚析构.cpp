#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base 构造函数" << endl;
    }
    virtual void setName(string name) = 0;
    virtual ~Base()
    {
        cout << "Base 析构" << endl;
    }
};

class Son : public Base
{

public:
    string *m_name;
    Son()
    {
        cout << "Son 构造函数" << endl;
    };
    void setName(string name)
    {
        m_name = new string(name);
    }

    ~Son()
    {
        cout << "Son 析构" << endl;
    }
};

int main()
{
    Base *b = new Son;
    b->setName("小明");

    delete b;
    return 0;
}