class Solution {
public:
    int addDigits(int num) {
        int ans=0;
        while(num!=0){
        int rem=num%10;
        ans=ans+rem;
        num=num/10;
        if(num==0&&ans>9){
            num=ans;
             ans=0;
        }
        }
        return ans;
    }
};