//week06-3.cpp
//LeetCode �ǲ߭p�e Simulation ��1�D 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string op : operations) { //C++ �i���j��
            //cout << op << "\n";//�ոլݡA�|�L�X����F��
            if(op[0]=='+'){ //�⥽��Ƭۥ[�A�A��^�h
                int temp = a.back();//���O�U�̫�1��
                a.pop_back();//�ȮɦR����
                int temp2 = a.back();//�A�O�U�̫�2��
                a.push_back(temp);//����̫�1����^�h
                a.push_back(temp+temp2);//��Ƭۥ[�A�A��^�h
            }else if(op[0]=='D'){ //�ƻs�̫�@��A�ADouble��2��
                a.push_back( a.back()*2 );
            }else if(op[0]=='C'){ //�R���̫�1��
                a.pop_back();
            }else { //��stoi(op) ��ơA��^�h
                a.push_back( stoi(op) );
            }
        }//�̫�A��for�j��A��}�Ca���ȡA�����[�_��
        int ans=0;
        for(int now : a){ //C++�i���j��A�]�i�H��for(int i=0;i<a.size();i++){ int now=a[i]
            ans += now;
        }
        return ans;//���H�Kreturn 0 ���@�U�A��
    }
};
