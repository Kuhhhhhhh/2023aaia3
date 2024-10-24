//(寫到一半)
//week 07-1.cpp 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    void myPrintBoard(int board[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout << voard[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";

    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {};//裡面都放0
        for(auto move : moves){ //用 auto 它會幫你寫好
            int i = move[0],j=move[1];
            board[i][j] = 1;
            myPrintBoard(board);
        }
        return "A";//勝利的是誰
    }
};
