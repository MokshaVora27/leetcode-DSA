class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
      map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0){
                mp[nums[i]]++;
            }
        }
        int ans=-1;
        int max=0;
        for(auto p:mp){
            if(max<p.second){
                max=p.second;
                ans=p.first;
            }
        }
        return ans;
    }
};