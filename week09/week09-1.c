//week09-1.c 1672. Richest Customer Wealth
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
        int M = accountsSize;//���X�ӤH
        int N = accountsColSize[0];//�o�ӤH�A���X�ӱb��
        int ans = 0;
        for(int i=0;i<M;i++){//��i�ӤH

            int total = 0; //�j��e��total�O0
            for(int j=0;j<N;j++){ //�L����j�ӱb��
                total += accounts[i][j];//�j�餤��total�W�[
            }

            if(total>ans)ans = total;//�j��᭱ total���ӥ�
        }
        return ans;
}
