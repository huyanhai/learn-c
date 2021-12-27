#include <iostream>

using namespace std;

// 声明函数
void func(int a, int b);

// 实现函数
void func(int a, int b)
{
    cout << "func()执行" << endl;
}

// 声明函数使用了默认值参数，实现函数同名参数不能使用默认值，否则出现二义性
// void func1(int a, int b = 10);

// void func1(int a, int b = 20)
// {
//     cout << "func1()执行" << endl;
// }

// 重载 1.同一个命名空间 2.函数名相同 3.函数参数类型/个数不同

void func2(int a)
{
    cout << "func2(int a)执行" << endl;
}

void func2(float a)
{
    cout << "func2(float a)执行" << endl;
}

// 引用重载
void func3(int &a)
{
    cout << "func3(int &a)执行" << endl;
}

void func3(const int &a)
{
    cout << "func3(const int &a)执行" << endl;
}

int main()
{
    float a = 1;
    int b = 1;
    func(10, 10);

    func2(10);
    func2(a);

    func3(b);
    func3(10); // int temp = 10; const &a = 10;

    return 0;
}