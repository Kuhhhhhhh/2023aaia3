//week09-5.cpp 1523. Count Odd Numbers in an Interval Range
//範圍內有幾個單數
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high - low)/2;//好像這個是答案，但有時候會小一點
        if(low%2==1 || high%2==1) ans++;//因為，頭尾有單數要再加一個數
        return ans;
    }
};
