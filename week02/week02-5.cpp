//week02-5.cpp 242. Valid Anagram
class Solution {//分析兩個字串的字母組成的成分是否相同
public:
    bool isAnagram(string s, string t) {
        int H1[256] = {},H2[256] = {};//一開始有ASCII 256種字母，都是0
        for(char c: s){ //左邊字串
            H1[c]++; //放在右邊 H1[c]
        }
        for(char c : t){ //右邊字串
            H2[c]++; //放在右邊 H[c]
        }
        for(int i=0;i<256;i++){//針對256種字母的成分，逐一比較是否相同
            if(H1[i] != H2[i]) return false;//不相同的話就失敗
        }//離開迴圈的話，就沒有不同，就都相同
        return true;//成功
    }
};
