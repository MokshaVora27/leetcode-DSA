class Solution {
public:
    int solve(vector<int>& nums,int index, int target) {
        if(index==nums.size()){
            if(target==0)
            return 1;
            return 0;
        }
        int plus=solve(nums,index+1,target-nums[index]);
        int minus=solve(nums,index+1,target+nums[index]);
        return plus+minus;
    }
        int findTargetSumWays(vector<int>& nums, int target){
            return solve(nums,0,target);
        }
    
};