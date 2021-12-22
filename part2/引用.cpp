#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}

int main()
{

    int a = 10;

    // int &b = a;  b是a的别名，b和a指向同一块内存，b的值发生变化，a的值也会变化

    int b = 20;
    swap(a, b);

    cout << a << endl;
    cout << b << endl;
    return 0;
}