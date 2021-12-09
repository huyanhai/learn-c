#include <iostream>
using namespace std;

struct person
{
    string name;
    string address;
    int age;
};

int main()
{
    person p[2] = {
        {"张三", "北京", 30},
        {"李四", "重庆", 29}};

    person p2 = {"李四", "重庆", 29};

    person *p1 = &p2;

    cout << p[0].name << p[0].address << p[0].age << endl;
    cout << p1->name << p1->address << p1->age << endl;

    return 0;
}