//week09-5.cpp 1523. Count Odd Numbers in an Interval Range
//�d�򤺦��X�ӳ��
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high - low)/2;//�n���o�ӬO���סA�����ɭԷ|�p�@�I
        if(low%2==1 || high%2==1) ans++;//�]���A�Y������ƭn�A�[�@�Ӽ�
        return ans;
    }
};
