//week07-4.cpp 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while(ss >> word ){ //一直把字讀到 word 字串裡
            ///什麼事都不做
        }
        return word.length(); //最後，看字串的長度
    }
};
