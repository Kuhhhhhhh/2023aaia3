// week06-3.cpp
//Leetcode 657.Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x =0, y=0; //一開始在(0,0)位置
        for(char c : moves){
            if(c=='U') y++;
            if(c=='D') y--;
            if(c=='R') x++;
            if(c == 'L') x--;
        }
        if(x==0 && y==0)return true; //還留在(0,0)就成功
        else return false;
    }
};
