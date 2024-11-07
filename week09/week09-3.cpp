//week09-3 73. Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size();//����M
        int N = matrix[0].size();//�k��M
        vector<bool> left(M);//���䪺�ĤġA��M��
        vector<bool> up(N);//��W�����ĤġA��N��
        for(int i=0;i<M;i++){//���Χ��㪺�j��A�ˬd������0�b����
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){//�p�G�O0�A�N�b����B�W�����Ĥ�
                   left[i] = true;//����left[i]���Ĥ�
                   up[j] = true;//�W��up[j]���Ĥ�
                }
            }
        }
        for(int i=0;i<M;i++){ //���Ӱj��A�ӵۨ�left[i]����
            if(left[i]==true){
                for(int j=0;j<N;j++) matrix[i][j]=0;//�A���泣�M��0
            }
        }
        for(int j=0; j<N; j++){//���Ӱj��A�ӵۨ�up[j]����
            if(up[j]==true){
                for(int i=0;i<M;i++) matrix[i][j] = 0;//�A���泣�M��0
            }
        }
    }
};
