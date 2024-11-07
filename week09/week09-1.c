//week09-1.c 1672. Richest Customer Wealth
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
        int M = accountsSize;//有幾個人
        int N = accountsColSize[0];//這個人，有幾個帳戶
        int ans = 0;
        for(int i=0;i<M;i++){//第i個人

            int total = 0; //迴圈前面total是0
            for(int j=0;j<N;j++){ //他的第j個帳號
                total += accounts[i][j];//迴圈中間total增加
            }

            if(total>ans)ans = total;//迴圈後面 total拿來用
        }
        return ans;
}
