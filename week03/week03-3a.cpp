//week03-3a.cpp 二合一的第1種方法 把不是0的找出來
//LeetCode 學習計畫283. Move Zeros
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] != 0) ans.push_back(num[i]);
        }
        //再用for迴圈放回去
        for(int i=0; i<unms.size();i++){
            if(i<ans.size())nums[i] = ans[i];//塞回去
            else nums[i] = 0;//其他的放0
        }
    }
};
