//leetcode 670. Maximum Swap
class Solution {
public:
    int maximumSwap(int num) {
        int ans = num;//最簡單的答案，就是本身
        string s = to_string(num);//stoi反過來
       // for(int i=0;i<s.length()-1;i++){
        for(int i=0;i<s.length()-1;i++){ //左手i
                for(int j=i+1;j<s.length();j++){ //右手j
                swap(s[i],s[j]); 看是否更大，更新
                ans = max(ans, stoi(s));//再交換回來
                swap(s[i],s[j]);
            }
        }
        return ans;
    }
};
