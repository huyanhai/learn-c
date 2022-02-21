#include <iostream>

using namespace std;

class Person
{
public:
    int *age;
    Person(int num)
    {
        age = new int(num);
    };

    ~Person()
    {
        if (age != NULL)
        {
            delete age;
            age = NULL;
        };
    }

    Person *operator=(Person &p)
    {
        if (this->age != NULL)
        {
            delete this->age;
            this->age = NULL;
        }

        cout << "Person:" << *p.age << endl;
        this->age = new int(*p.age);
        return this;
    }
};

int main()
{
    Person p1 = Person(20);
    Person p2 = Person(30);

    // 重载之前的值
    cout << *p1.age << endl;
    cout << *p2.age << endl;

    p2 = p1;

    // 重载之后的值
    cout << *p1.age << endl;
    cout << *p2.age << endl;

    return 0;
}