#include <iostream>

using namespace std;

class Book
{
    // 声明友元类，在Person中可以访问Book的私有属性
    friend class Person;

public:
    string name;
    Book()
    {
        name = "book";
        page = 20;
    }

private:
    int page;
};

class Person
{
public:
    string name;
    Book book;
    Person()
    {
        cout << book.name << endl;
        cout << book.page << endl;
    }
};

int main()
{

    Person p;

    return 0;
}