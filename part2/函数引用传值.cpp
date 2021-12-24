#include <iostream>

using namespace std;

// 引用底层其实就是指针 int * const p; 表示修饰的内存地址不可改变
int &show_num()
{
    static int a = 10; // static变量存储在内存的常量区域，整个应用执行完后，由程序自动销毁
    return a;
}

// const修饰引用不可修改
void show_num1(int const &a)
{
    // a = 100; 赋值报错
    cout << "show_num1:" << a << endl;
}

int main()
{
    int &a = show_num();

    cout << a << endl;
    show_num() = 100; // 引用赋值

    show_num1(a);

    cout << a << endl;
    return 0;
}