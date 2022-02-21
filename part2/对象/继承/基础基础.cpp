#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        height = 10;
    }
    void show_height()
    {
        cout << "my height is:" << height << endl;
    }

private:
    int height;
};

class Tercher : public Person
{
};

int main()
{
    Tercher t;

    t.show_height();

    return 0;
}