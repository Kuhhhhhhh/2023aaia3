//week02-5.cpp 242. Valid Anagram
class Solution {//���R��Ӧr�ꪺ�r���զ��������O�_�ۦP
public:
    bool isAnagram(string s, string t) {
        int H1[256] = {},H2[256] = {};//�@�}�l��ASCII 256�ئr���A���O0
        for(char c: s){ //����r��
            H1[c]++; //��b�k�� H1[c]
        }
        for(char c : t){ //�k��r��
            H2[c]++; //��b�k�� H[c]
        }
        for(int i=0;i<256;i++){//�w��256�ئr���������A�v�@����O�_�ۦP
            if(H1[i] != H2[i]) return false;//���ۦP���ܴN����
        }//���}�j�骺�ܡA�N�S�����P�A�N���ۦP
        return true;//���\
    }
};
