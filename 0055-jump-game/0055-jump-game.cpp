class Solution {
public:
    bool canJump(vector<int>& nums) {
        int far=0;
        for(int i=0;i<nums.size();i++){
            if(i>far){
                return false;
            }
            int a=nums[i]+i;
            if(a>far){
                far=a;
            }
        }
        return true;
    }
};