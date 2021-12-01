#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 0;
    // ++a * 10 先执行自加操作，然后执行后面的运算
    b = ++a * 10;

    int a1 = 10;
    int b1 = 0;
    // a++ * 10 先执行后面的运算，然后执行自加操作
    b1 = a++ * 10;

    cout << "a的值是：" << a << ",b的值是：" << b << endl;
    cout << "a1的值是：" << a1 << ",b1的值是：" << b1 << endl;

    return 0;
}
