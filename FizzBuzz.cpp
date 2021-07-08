class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> v(n);
       
       for(int i=0;i<n;i++)
       {
           int m=i+1;
           if(m%3==0 && m%5==0)
           {
               v[i]="FizzBuzz";
           }
           
          else if(m%3==0)
           {
               v[i]="Fizz";
           }
           
          else if(m%5==0)
           {
               v[i]="Buzz";
           }
           
           else v[i]=to_string(i+1);
       }
        
        return v;
    }
};