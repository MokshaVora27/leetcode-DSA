class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int p1=0;
        int p2=0;
        if(n==1){
            return nums[0];
        }
        for(int i=0;i<n;i++){
            int t=p2+nums[i];
            int s=p1;
            int c;
            if(t>s){
                c=t;
            }
            else{
                c=s;
            }
            p2=p1;
            p1=c;
        }
        return p1;
    }
};