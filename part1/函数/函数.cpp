#include <iostream>
using namespace std;
#include "is_max.h"

int sum(int a, int b)
{
    return a + b;
}

void swap(int a, int b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    cout << "交换后a:" << a << endl;
    cout << "交换后b:" << b << endl;
}

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);

    cout << "a+b:" << sum(a, b) << endl;
    cout << "交换后a=" << a << endl;
    cout << "交换后b=" << b << endl;
    cout << "返回a,b中较大的值:" << is_max(a, b) << endl;
    return 0;
}