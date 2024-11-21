///week11-2.cpp 要試一試 C++ 2011 c++11的功能
#include <iostream>
#include <vector>
#include <unordered_map>
///Setting 設定-1 Compiler 編譯器,勾c++11

using namespace std;
int main()
{
    vector<int> a;
    unordered_map<int,int>m;///如果用預設的c++98,會不行
    m[999] = 13;///Bash Map 雜湊表,可以快速找到、對應某個值
    m[137] = 7;
    cout << "m[999] 的值是"<<m[999] << endl;
    cout << "m[137] 的值是"<<m[137] << endl;
    return 0;
}
