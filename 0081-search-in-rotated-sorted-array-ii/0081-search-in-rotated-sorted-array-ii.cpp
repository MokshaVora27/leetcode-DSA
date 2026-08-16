class Solution {
public:
    bool search(vector<int>& n, int target ) {
        int low=0;
        int high = n.size()-1;
        while(low<=high){
            int mid=(low + high)/2;
            if(n[mid]==target)
            return true;
            if(n[low]== n[mid] && n[mid]==n[high]){
                low++;
                high--;
                continue;
            }
            if(n[low]<=n[mid]){
                if(n[low]<=target && target<n[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(n[mid]<target && target<= n[high]){
                    low=mid+1;
                }
                else {
                    high=mid-1;
                }
            }
        }
        return false;
    }
};