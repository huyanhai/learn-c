#include <iostream>

using namespace std;

int main()
{
    // char 占用一个字节,单引号,只能有一个字符
    char c = 'a';
    cout << sizeof(c) << ",ASCII码为：" << int(c) << endl;
    return 0;
}
