// week02-3.cpp Leetcode 1768. Merge Strings Alternately
//���Ӧr��A����X�b�@�_
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;//�ŧi�@�Ӧr��A����
        //for�j��A�u�n���@�Ӧr������٨S�W�L�N�~��
        for(int i=0;i<word1.length() || i<word2.length();i++){
            if(i<word1.length()) ans += word1[i];//�W�[1�Ӧr��
            if(i<word2.length()) ans += word2[i];//�W�[�@�Ӧr��

        }
        return ans;//�⵪�װe�X�h
    }
};
