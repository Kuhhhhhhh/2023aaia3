//1822. Sign of the Product of an Array
//week11-5b.cpp
//1822. Sign of the Product of an Array
//week11-5b.cpp
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;
        for(int num : nums)
        {
            if(num>0) ans*=1;//���n���Ӧh
            if(num==0) ans *= 0;//�u��+1,-1,0
            if(num<0) ans *= -1;
        }//���n���Ӧh
        if(ans>0)return 1;
        else if(ans==0)return 0;
        else return -1;
    }//�o�Ӽg�k�A�O����!
};
