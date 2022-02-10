#include <iostream>

using namespace std;

class Person {
    public:
    string name;
    void showName(){
        // 空指针判断
        if(this == NULL){
            return;
        }
        cout << this->name << endl;
    }
};

int main(){
    Person *p = NULL;
    p->showName();
    return 0;
}