// week10-5.cpp �ǲ߭p�eMath ��3�D
//LeetCode 860. Lenonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0,d10 = 0,d20 = 0;//�}�l�ɦ���S�s��
        for(int c:bills){//�i��for�j��
            if(c==5)d5++;
            if(c==10){//�ȤH�n�A���5��
                if(d5>0){
                    d10++;//����10��
                    d5--;//���^5��
                }else return false;//�S��k����A���ѤF

            }
            if(c==20){
                if(d10>0 && d5>0){//1��10���B1��5��
                d20++;
                d10--;
                d5--;
            }else if(d5>=3){
                d20++;
                d5-=3;
            }else return false;//�S��k����A���ѤF
        }
    }
    return true;//�������S�X���A���\�����������ͷN�A�}��!
    }
};
