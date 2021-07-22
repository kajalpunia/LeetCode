class Solution {
public:
    string addBinary(string a, string b) 
    {
        int aBi = a.length() - 1, bBi = b.length() - 1, carry = 0 ;
        string res = "";
        
        while(aBi >= 0 || bBi >= 0 || carry)
        {
            int sum = ((aBi >= 0) ? a[aBi] - '0' : 0) + \
                      ((bBi >= 0) ? b[bBi] - '0' : 0) + \
                      carry;            
            res.insert(res.begin(), (sum%2 + '0'));            
            carry = sum/2;             
            aBi--;
            bBi--;
        }        
        return res;
    }
};
