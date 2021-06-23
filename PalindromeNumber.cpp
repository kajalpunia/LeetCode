class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=INT_MAX||x<=INT_MIN)
            return false;
        if(x<0)
            return false;
        int rem=0,temp=x,rev=0;
        while(x>0)
        {
            if(rev> INT_MAX/10)
            return 0;
            rem=x%10;
            rev=(rev*10)+rem;
            x/=10;
        }
        if(rev==temp)
            return true;
        else 
            return false;
    }
};