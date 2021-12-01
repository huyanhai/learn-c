#include <iostream>
using namespace std;

// 整形
void type_init()
{
    // short 短整形 2个字节
    short num1 = 2;
    short *num_1;
    // int 整形 4个字节
    int num2 = 2;
    int *num_2;
    // long 长整形 4/8个字节
    long num3 = 2;
    long *num_3;

    // * 指针 - 表示指向的是变量的内存地址
    // & 引用 - 表示变量的内存地址
    num_1 = &num1;
    num_2 = &num2;
    num_3 = &num3;

    cout << "num1的值为:" << num1 << ",长度为" << sizeof(num1) << ",内存地址为" << &num1 << ",指针值为" << *num_1 << endl;
    cout << "num2的值为:" << num2 << ",长度为" << sizeof(num2) << ",内存地址为" << &num2 << ",指针值为" << *num_2 << endl;
    cout << "num3的值为:" << num3 << ",长度为" << sizeof(num3) << ",内存地址为" << &num3 << ",指针值为" << *num_3 << endl;
}

int main()
{
    type_init();
    return 0;
}