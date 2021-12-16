#include <iostream>
using namespace std;

int const CONTACT_MAX = 10;

struct person
{
    string name;
    int sex;
    int age;
    string tel;
    string address;
};

struct contact
{
    person list[CONTACT_MAX];
    int len;
};

void show_menu()
{
    cout << "******************" << endl;
    cout << "*  1.添加联系人  *" << endl;
    cout << "*  2.显示联系人  *" << endl;
    cout << "*  3.删除联系人  *" << endl;
    cout << "*  4.查找联系人  *" << endl;
    cout << "*  5.修改联系人  *" << endl;
    cout << "*  6.清空联系人  *" << endl;
    cout << "*  0.退出通讯录  *" << endl;
    cout << "******************" << endl;
}

void add_contact(contact *contact)
{
    if (contact->len > CONTACT_MAX)
    {
        cout << "通讯录已满" << endl;
        return;
    }

    string name = "";
    cout << "请输入姓名：" << endl;
    cin >> name;
    contact->list[contact->len].name = name;

    int sex;
    cout << "请输入性别：" << endl;
    cout << "1 - 男；2- 女" << endl;
    cin >> sex;

    while (true)
    {
        if (sex == 1 || sex == 2)
        {
            contact->list[contact->len].sex = sex;
            break;
        }
        else
        {
            cout << "性别错误" << endl;
        }
    }

    int age;
    cout << "请输入年龄：" << endl;
    cin >> age;
    contact->list[contact->len].age = age;

    string tel;
    cout << "请输入电话：" << endl;
    cin >> tel;
    contact->list[contact->len].tel = tel;

    string address;
    cout << "请输入地址：" << endl;
    cin >> address;
    contact->list[contact->len].address = address;

    contact->len++;
    cout << "联系人添加成功" << endl;

    return;
}

void show_contact(contact *contact)
{
    for (int i = 0; i < contact->len; i++)
    {
        cout << "姓名是:" << contact->list[i].name << ",性别是:" << contact->list[i].sex << ",年龄是:" << contact->list[i].age << ",电话号码是:" << contact->list[i].tel << ",地址是:" << contact->list[i].address << endl;
    }
    return;
}

void del_contact(contact *contact)
{
    show_contact(contact);
    cout << "请输入要删除的联系人姓名" << endl;
    string name;
    cin >> name;
    for (int i = 0; i < contact->len; i++)
    {
        if (contact->list[i].name == name)
        {
            break;
        }
    }
    return;
}

int main()
{
    int is_select = 0;
    contact contact = {};
    contact.len = 0;
    while (true)
    {
        show_menu();
        cin >> is_select;
        switch (is_select)
        {
        case 1:
            add_contact(&contact);
            break;
        case 2:
            show_contact(&contact);
            break;
        case 3:
            del_contact(&contact);
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 0:
            cout << "欢迎下次使用，系统将退出" << endl;
            return 0;
            break;
        default:
            break;
        }
    }

    system("pause");
    return 0;
}