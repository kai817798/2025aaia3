//week07-4.cpp 學習計畫 Simulation 模擬 第4題
//1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions + instructions + instructions + instructions;
        cout << instructions;
        int x=0,y=0;//x座標,y座標
        int d=0;//d:方向direction 0:北 1:東 2:南 3:西
        //右轉d=(d+1)%4取4的餘數
        //左轉d=(d-1+4)%4 = (d+3) % 4 竟然可以倒過來
        int dx[4] = {0, 1, 0, -1};//前進一格時，會走dx[d]
        int dy[4] = {1, 0, -1, 0};//這兩行，是地圖2D模擬的精華，決定前進多少
        for(char c:instructions){ //依照字母的指令，一次做1個動作
            if(c=='G'){ //前進1格，配合dx[d] dy[d]前進
                x += dx[d];
                y += dy[d];
            }else if(c=='R'){ //右轉
                d=(d+1) % 4;
            }else if(c=='L'){ //左轉
                d=(d+3) % 4;
            }
        }//離開迴圈時....竟然會一直走，有時候會走不回來，有時候會回來。
        //cout << 'x' << x << 'y' << y << endl;
        if(x==0 && y==0)return true;
        else return false;
    }
};
