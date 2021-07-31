class Solution {
public:
    int guessNumber(int n) 
    {
        int low = 1;
        int high = n;
        int pick = 0;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(guess(mid) == 0){
                pick = mid;
                return mid;
               
            }else if (guess(mid) == 1){
                  low = mid+1;
            }else if(guess(mid) == -1){
                 high = mid-1;
            }
        }
        return pick;
    }
};