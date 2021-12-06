#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    // const后面是*,说明*p不能操作
    const int *p = &a; // 常量指针，指针的指向可以修改，指针指向的值不能修改

    // const后面是p1,说明p1不能操作
    int *const p1 = &a; // 指针常量，指针指向的值可以修改，指针指向的地址不能改

    const int *const p2 = &a; // 指针修饰的值和地址都不能改

    // *p = 20; 修改值会报错
    p = &b;

    *p1 = 20;
    // p1 = &b; // 修改指针指向会报错

    // *p2 = 20;
    // p2 = &b;

    cout << *p << endl;
    cout << *p1 << endl;
    cout << *p2 << endl;
    return 0;
}