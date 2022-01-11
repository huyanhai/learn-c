#include <iostream>
using namespace std;

class Person
{

public:
    int *age;

    Person(int age)
    {
        this->age = new int(age);
    }

    // 拷贝构造函数默认执行的是浅拷贝
    Person(const Person &p)
    {
        // this->age = p.age; // 浅拷贝
        this->age = new int(*p.age);
    }

    ~Person()
    {
        if (this->age != NULL)
        {
            delete this->age;
            this->age = NULL;
        }
        cout << "执行析构函数" << endl;
    }
};

int main()
{
    Person p(18);

    Person p1(p);

    cout << "person的年龄是:" << *p.age << endl;
    cout << "person1的年龄是:" << *p.age << endl;

    return 0;
}