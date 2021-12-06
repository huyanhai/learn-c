#include <iostream>
using namespace std;

int main()
{
    int *p = NULL;
    int *p1 = (int *)0x00001; // 野指针赋值也会报错

    // 空指针赋值报错
    *p = 100;
    *p1 = 100;

    return 0;
}