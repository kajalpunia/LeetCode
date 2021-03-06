class Solution {
public:
    int addDigits(int num) 
    {
        int sum = 0;
        
        while (num >= 10) 
        {
            sum += num/10;
            num%=10;
        }
        sum+=num;
        
        return sum>=10?addDigits(sum):sum;
    }
};