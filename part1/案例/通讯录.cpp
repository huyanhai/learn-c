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

// 操作菜单
void show_menu()
{
    cout << "****************" << endl;
    cout << "*  1.添加联系人  *" << endl;
    cout << "*  2.显示联系人  *" << endl;
    cout << "*  3.删除联系人  *" << endl;
    cout << "*  4.查找联系人  *" << endl;
    cout << "*  5.修改联系人  *" << endl;
    cout << "*  6.清空联系人  *" << endl;
    cout << "*  0.退出通讯录  *" << endl;
    cout << "****************" << endl;
}

// 输出联系人
void output_contact(contact *contact, int idx)
{
    cout << "姓名是:" << contact->list[idx].name << ",性别是:" << contact->list[idx].sex << ",年龄是:" << contact->list[idx].age << ",电话号码是:" << contact->list[idx].tel << ",地址是:" << contact->list[idx].address << endl;
}

// 处理输入数据
void input_contact(contact *contact, int idx)
{
    string name = "";
    cout << "请输入姓名：" << endl;
    cin >> name;
    contact->list[idx].name = name;

    int sex;
    cout << "请输入性别：" << endl;
    cout << "1 - 男；2- 女" << endl;

    while (true)
    {
        cin >> sex;
        if (sex == 1 || sex == 2)
        {
            contact->list[idx].sex = sex;
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
    contact->list[idx].age = age;

    string tel;
    cout << "请输入电话：" << endl;
    cin >> tel;
    contact->list[idx].tel = tel;

    string address;
    cout << "请输入地址：" << endl;
    cin >> address;
    contact->list[idx].address = address;
}

// 添加联系人
void add_contact(contact *contact)
{
    if (contact->len > CONTACT_MAX)
    {
        cout << "通讯录已满" << endl;
        return;
    }
    input_contact(contact, contact->len);
    contact->len++;
    cout << "联系人添加成功" << endl;
    return;
}

// 显示联系人
void show_contact(contact *contact)
{
    if (contact->len < 1)
    {
        cout << "暂无联系人" << endl;
        return;
    }
    for (int i = 0; i < contact->len; i++)
    {
        output_contact(contact, i);
    }
}

// 判断指定的联系人是否存在
int find_contact_idx(contact *contact, string name)
{
    for (int i = 0; i < contact->len; i++)
    {
        if (contact->list[i].name == name)
        {
            return i;
        }
    }
    return -1;
}

// 查找联系人
void find_contact(contact *contact, int idx)
{
    output_contact(contact, idx);
}

// 删除指定联系人
void del_contact(contact *contact, int idx)
{
    for (int i = idx; i < contact->len; i++)
    {
        contact->list[i] = contact->list[i + 1];
    }
    contact->len--;
}

// 编辑联系人
void edit_contact(contact *contact, int idx)
{
    input_contact(contact, idx);
    cout << "联系人修改成功" << endl;
}

// 清空通讯录
void clear_contact(contact *contact)
{
    contact->len = 0;
}

void check_contact(contact *contact, int type)
{
    string tips = "编辑";
    if (type == 1)
    {
        tips = "删除";
    }
    if (type == 2)
    {
        tips = "查找";
    }

    cout << "请输入要" << tips << "的人的姓名" << endl;
    string name;
    cin >> name;
    int ret = find_contact_idx(contact, name);
    if (ret > -1)
    {
        switch (type)
        {
        case 0:
            edit_contact(contact, ret);
            break;
        case 1:
            del_contact(contact, ret);
            break;
        case 2:
            find_contact(contact, ret);
            break;
        default:
            break;
        }
    }
    else
    {
        cout << "通讯录中不存在" << name << endl;
    }
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
        {
            check_contact(&contact, 1);
            break;
        }
        case 4:
        {
            check_contact(&contact, 2);
            break;
        }
        case 5:
        {
            check_contact(&contact, 0);
            break;
        }
        break;
        case 6:
            clear_contact(&contact);
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