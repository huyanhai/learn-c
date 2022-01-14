#include <iostream>
using namespace std;

// 空对象默认占一个字节的位置，为了区分不同对象的内存地址
// 类内有成员属性时，对象占用内存大小为成员属性大小
// 类成员函数和静态方法/静态属性分开存储
// 类成员非静态属性才跟类保持一致

class Person
{
public:
    int age;
    void show(){};
    static string address;
};

int main()
{
    cout << sizeof(Person) << endl;

    return 0;
}