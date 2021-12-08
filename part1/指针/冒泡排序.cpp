#include <iostream>
using namespace std;

void sort(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void show(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[10] = {3, 2, 7, 5, 10, 6, 9, 8, 1, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "排序之前的顺序为：" << endl;
    show(arr, len);
    sort(arr, len);
    cout << "排序之后的顺序为：" << endl;
    show(arr, len);

    return 0;
}