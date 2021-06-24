class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int n=strs.size();
        string prefix="";
       for(int i=0;i<strs[0].size();i++)
       {
           int count=1;
           for(int j=1;j<n;j++){
               if(strs[0][i]!=strs[j][i] || i>strs[j].size()) 
                break;
               else
                count+=1;
           }
           if(count==n)
               prefix+=strs[0][i];
           else
               break;
       }
        
        return prefix;
    }
};