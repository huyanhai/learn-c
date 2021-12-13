#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
};

struct teacher
{
    string name;
    int age;
    student std;
};

void show_teacher(teacher t)
{
    cout << "show_teacher:" << t.name << t.age << t.std.name << t.std.age << endl;
}

void show_teacher1(teacher *t)
{
    t->std.age = 18;
    cout << "show_teacher1:" << t->name << t->age << t->std.name << t->std.age << endl;
}

int main()
{
    teacher t = {"王老师", 23, {"小明", 15}};
    show_teacher(t);
    show_teacher1(&t);
    cout << t.name << t.age << t.std.name << t.std.age << endl;
    return 0;
}