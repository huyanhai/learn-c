#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age) : name(name), age(age) {}
};

int main()
{
    Person p("张三", 12);

    cout << "姓名是:" << p.name << ",年龄是:" << p.age << endl;

    return 0;
}