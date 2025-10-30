//week08-2.cpp LeetCode�ǲ߭p�e Matrix�x�}��4�D
// 73. Set Matrix Zeroes �]�w�@��0
//�n�p�ߡA����@��Ū�B�@��]��0�A�n�ⶥ�q ��Ū�� �A�]0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //��1���q�A��Ū���A�O�U�������s������i�Mj
        int M = matrix.size(),N = matrix[0].size();//����M�A�k��N
        vector<int>markI(M,0),markJ(N,0);//�ŧiC++���}�C�A���פ��OM N�A�̭����]��0
        for(int i=0;i < M; i++){
            for(int j=0;j < N;j++){
                if(matrix[i][j]==0){ //�n�O�U������i,j
                    markI[i]=1;//�аO�@�Ui���o�����A���@�U���n�M��0
                    markJ[j]=1;//�аO�@�Uj���o�㪽���A���@�U���n�M��0
                }
            }
        }
        //��2���q�A�A�ӵ�markI�MmarkJ���аO�A�������M��0
        for(int i=0;i < M; i++){
            for(int j=0;j < N; j++){
                if(markI[i]==1 || markJ[j]==1) matrix[i][j]=0;
            }//�p�G���аO�A�A�⥦���������ܦ�0
        }
    }
};
