#include <iostream>
using namespace std;

// 静态成员函数和静态成员方法一样可以通过类或者对象调用
class Person
{
public:
    static void show()
    {
        Person::age = 12;
        cout << "static void show调用" << endl;
        // this.address = "重庆"; 静态成员函数只能操作静态成员变量，非静态成员变量会报错
    };

    static string name;
    string address;

private:
    static int age; // 私有静态成员变量外部不能访问
};

string Person::name = "demo";

int main()
{

    Person p;
    p.show();
    Person::show();

    cout << p.name << endl;
    cout << Person::name << endl;

    return 0;
}