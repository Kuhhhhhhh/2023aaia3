//1822. Sign of the Product of an Array
//week11-5a.cpp
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;
        for(int num : nums)
        {
            ans *= num;
        }//���n���Ӧh
        if(ans>0)return 1;
        else if(ans==0)return 0;
        else return -1;
    }//�o�Ӽg�k�A�O����!
};