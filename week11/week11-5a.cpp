//1822. Sign of the Product of an Array
//week11-5a.cpp
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;
        for(int num : nums)
        {
            ans *= num;
        }//不要乘太多
        if(ans>0)return 1;
        else if(ans==0)return 0;
        else return -1;
    }//這個寫法，是錯的!
};
