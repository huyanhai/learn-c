#include <iostream>
using namespace std;

int main()
{
    // 数组前后调换顺序
    int arr[] = {3, 4, 5, 2, 1};

    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++)
    {
        int tmp = arr[i];
        if (i < length / 2)
        {
            arr[i] = arr[length - 1 - i];
            arr[length - 1 - i] = tmp;
        }
    }

    for (int j = 0; j < length; j++)
    {
        cout << "翻转后的数据是:" << arr[j] << endl;
    }

    return 0;
}