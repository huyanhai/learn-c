#include <iostream>

using namespace std;

void func(int a, int b, int c)
{
    cout << "func()执行" << endl;
}

// 默认值后面所有的参数都需要默认值
void func1(int a, int b = 10, int c = 20)
{
    cout << "func1()执行" << endl;
}

// 占位参数
void func2(int a, int)
{
    cout << "func2()执行" << endl;
}

int main()
{
    func(10, 10, 10);
    func1(10);
    func2(10, 10);
    return 0;
}