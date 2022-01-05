#include <iostream>
using namespace std;

// struct定义的属性默认是public
// class定义的属性默认是private

struct Person
{
    string name;
};

class Person1
{
    string name;
};

int main()
{
    Person p;
    Person1 p1;

    p.name = "张三";
    // p1.name = "李四"; 默认是私有属性
    return 0;
}
