class Solution {
public:
    int romanToInt(string s) 
    {
        int n = s.size(), num = 0;
        for(int i = 0; i < n; i++) {
            char ch = s[i], next = s[i + 1];
            switch(ch) 
            {
             case 'I':
                      if (next == 'V') 
                        {num += 4; i++;}
                      else if (next == 'X') 
                        {num += 9; i++;}
                      else 
                          num += 1;
                      break;
             case 'X':
                      if (next == 'L') 
                        {num += 40; i++;}
                      else if (next == 'C') 
                        {num += 90; i++;}
                      else 
                          num += 10;
                      break;
             case 'C':
                      if (next == 'D') 
                        {num += 400; i++;}
                      else if (next == 'M') 
                        {num += 900; i++;}
                      else 
                          num += 100;
                      break;
             case 'V':
                      num += 5;
                      break;
             case 'L':
                      num += 50;
                      break;
             case 'D':
                      num += 500;
                      break;
             case 'M':
                      num += 1000;
                      break;   
            }
        }
        return num;
    }
};