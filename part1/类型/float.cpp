#include <iostream>
using namespace std;

int main()
{
    //    默认双精度
    //    float 单精度 长度为4个字节
    //    double 双精度 长度为8个字节
    float num = 0.0f;
    double num1 = 0.00;
    cout << sizeof(num) << endl;
    cout << sizeof(num1) << endl;
    return 0;
}