//week03-2b.cpp�G�X�@ �n�g2��
//LeetCode �ǲ߭p�e��8�D 1822. Sign of the product of an Array
//��}�C���_��, �ݬO���ơB�t��,�٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;//�]��0�������,���|�ܦ�0,�u��1�̨�, �������ܤ���
        for(int i=0; i<nums.size();i++) { //�ݦ��X�Ӽ�,�j��]�X��
            if(nums[i]>0) ans *= +1;
            if(nums[i]<0) ans *= -1;
            if(nums[i]==0) ans *= 0;
            //ans *=nums[i];//�C����num[i]���ians��
        }//�Ʀr�V�ӶV�j,1000�ӼƦr,����@�b,�N�z���F,�ҥH���O���F
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;
    }
};
