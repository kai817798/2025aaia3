//week03-3a.cpp �G�X�@����1�ؤ�k �⤣�O0����X��
//LeetCode �ǲ߭p�e283. Move Zeros
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] != 0) ans.push_back(num[i]);
        }
        //�A��for�j���^�h
        for(int i=0; i<unms.size();i++){
            if(i<ans.size())nums[i] = ans[i];//��^�h
            else nums[i] = 0;//��L����0
        }
    }
};
