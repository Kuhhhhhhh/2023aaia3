//week02-4.cpp 389. Find the Difference
//����s�A�k��t�A�k��h�F�Ӧr���A�����D�b���̡A��X��!
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256] = {};//�}�C�A�̭��έp�r���X�{���ơA��l�ȳ��O0()
        for(char c: s){//�w��r��s�̪��r��c�v�@�έp���R
            H[c]++;//�h�F�@�Ӧr��c
        }
        for(char c: t){
            H[c]--;//�Ψ�@�Ӧr��C �}�C����l�̪���ƴN�ܤ֤F
            if(H[c]<0)return c;//�p�G�ܦ��t���A���N�����ΡA������F!
        }
        return ' ';//�᳣̫�S����쪺�ܡA�^�Ǫťժ��r�� ' '�������ӪŮ��A�B��޸�

    }
};
