// week03-5.cpp �ǲ߭p�e��5�D �P�_�Y�r�O���O�ѡu���ơv���X�Ӫ��r��
//leetcode 459. Repeated Substring Pattern
//abcabcabcabc
//abcabcabcabcabcabcabcabc �⥦copy�⦸
//bcabcabcabcabcabcabcab �Y�����屼1�Ӧr��
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s; //�⥦copy�⦸
        int N = s2.length(); //�s������ N
        return s2.substr(1,N-2).find(s) != string::npos;
    }
};
