class Solution {
public:
    int reverse(int x) {
        long rev_num=0;
        while(x!=0){
            // int rev_num=0;
            int rem=x%10;
            rev_num=rev_num*10+rem;
            x=x/10;
        }
         if(rev_num > 2147483647 || rev_num < -2147483648)
            return 0;
        return rev_num;
    }
};