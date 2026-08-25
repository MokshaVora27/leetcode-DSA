class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>s(nums.begin(),nums.end());
        int ans=k;
        while(s.find(ans)!=s.end()){
            ans+=k;
        }
        return ans;
    }
};