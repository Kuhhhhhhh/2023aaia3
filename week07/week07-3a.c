//Leecode�G�X�@
// week07-3a.cpp
//Leetcode 657.Robot Return to Origin(�A�g�@��)
class Solution {
public:
    bool judgeCircle(string moves) {
        int x =0, y=0; //�@�}�l�b(0,0)��m
        for(char c : moves){
            if(c=='U') y++;
            if(c=='D') y--;
            if(c=='R') x++;
            if(c=='L') x--;
        }
        if(x==0 && y==0)return true; //�ٯd�b(0,0)�N���\
        else return false;
    }
};
