//leetcode 670. Maximum Swap
class Solution {
public:
    int maximumSwap(int num) {
        int ans = num;//��²�檺���סA�N�O����
        string s = to_string(num);//stoi�ϹL��
       // for(int i=0;i<s.length()-1;i++){
        for(int i=0;i<s.length()-1;i++){ //����i
                for(int j=i+1;j<s.length();j++){ //�k��j
                swap(s[i],s[j]); �ݬO�_��j�A��s
                ans = max(ans, stoi(s));//�A�洫�^��
                swap(s[i],s[j]);
            }
        }
        return ans;
    }
};
