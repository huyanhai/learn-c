#include <iostream>
using namespace std;

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "swap:" << *p1 << endl;
    cout << "swap:" << *p2 << endl;
}

int main()
{
    int a = 10;
    int b = 20;

    swap(&a, &b);

    cout << "main:" << a << endl;
    cout << "main:" << b << endl;

    return 0;
}