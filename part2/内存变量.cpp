#include <iostream>

using namespace std;

// int *show_number()
// {
//     // 局部变量当函数执行完成，系统会自动回收
//     int a = 10;
//     return &a;
// }

int *show_number1()
{
    int *a = new int(1);
    return a;
}

int main()
{
    int *b = show_number1();

    cout << *b << endl;
    delete b; // 使用new关键字创建的变量，需要使用delete释放内存
    cout << *b << endl;
    return 0;
}