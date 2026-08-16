class Solution {
public:
    int solve(vector<int> & nums,int left,int right){
        if(left==right)
        return nums[left];
        int takeleft = nums[left]-solve(nums,left+1,right);
        int takeright = nums[right]-solve(nums,left,right-1);
        return max(takeleft,takeright);
    }

    bool predictTheWinner(vector<int>& nums) {
        int difference = solve(nums,0,nums.size()-1);
        return difference >=0;
    }
};