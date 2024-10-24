//(�g��@�b)
//week 07-2b.cpp 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    void myPrintBoard(int board[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";

    }
    bool myTestWin(int board[3][3],int now){
        if(board[0][0]==now && board[0][1]==now && board[0][2]==now) return true;//�W����
        if(board[1][0]==now && board[1][1]==now && board[1][2]==now) return true;//������
        if(board[2][0]==now && board[2][1]==now && board[2][2]==now) return true;//�U����

        if(board[0][0]==now && board[1][0]==now && board[2][0]==now) return true;//�����u
        if(board[0][1]==now && board[1][1]==now && board[2][1]==now) return true;//�����u
        if(board[0][2]==now && board[1][2]==now && board[2][2]==now) return true;//�k���u
        //�﨤�u
        if(board[0][0]==now && board[1][1]==now && board[2][2]==now) return true;//���W��
        if(board[0][2]==now && board[1][1]==now && board[2][0]==now) return true;//�k�W��
        return false;//���S���\,�N�O����

    }//�n�ݬ�,�ֳs�u���\
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {};//�̭�����0
        int now = 1; //��1�ӤU���H,�s1:"A",2:"B"
        for(auto move : moves){ //�� auto ���|���A�g�n
            int i = move[0],j=move[1];
            board[i][j] = now;//�令now
            myPrintBoard(board);
            if(myTestWin(board,now)){//�n�ݬݡA�ֳs�u���\
                if(now==1) return "A";
                else return "B";
            }
            now = 3- now;//1��2,2��1,1��2,2��1
        }
        return "Draw";//���S���H�ӧQ����
    }
};
