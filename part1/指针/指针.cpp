#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    cout << "a的值为：" << a << ",a的内存地址为:" << &a << endl;
    cout << "p的值为：" << p << ",p指向的内存地址的值为：" << *p << endl;

    *p = 100;

    cout << "修改后a的值为：" << a << "，修改后a的内存地址为：" << &a << endl;
    cout << "修改后*p的值为：" << p << "，修改后p指向的内存地址的值为：" << *p << endl;
    return 0;
}