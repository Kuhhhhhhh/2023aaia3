// for迴圈在2011年的C++才能用
//在settings-compiler 把-std=c++11的2011年的C++開起來
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(char c:s){
        cout << c << "\n";
    }
}
