/// week10-2.cpp �i���� class �̭����غc�禡�B����ơB����k
#include <iostream>
#include <string>
using namespace std;
class Cat{
public:
    Cat(string _name){
        name = _name;
    }
    string name;///�ܼơB���
    void print(){///��ơB��k
        cout << "I am a cat.My name is " << name << ".\n";
    }
};
int main()
{
    Cat cat1("�p��"),cat2("�p��");
    cat1.print();
    cat2.print();
}
