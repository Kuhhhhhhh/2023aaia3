//week07-4.cpp 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while(ss >> word ){ //�@����rŪ�� word �r���
            ///����Ƴ�����
        }
        return word.length(); //�̫�A�ݦr�ꪺ����
    }
};
