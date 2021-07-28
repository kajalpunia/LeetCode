class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        sort(s.begin(), s.end()); 
        sort(t.begin(), t.end());
        int index = 0;
        for(; index < s.length(); index++)
        {
            if(s[index]!= t[index]) 
                break; 
        }
        return t[index];  
    }
};