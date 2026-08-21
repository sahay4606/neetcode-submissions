class Solution {
public:
    bool isPalindrome(string s) 
    {

        int n = s.size();
       ;
       
      

        int l = 0, r = n-1;
        while (l<r)
        {
            
            while(l<r && isalnum(s[l])==0)
            l++;


            while(l<r && isalnum(s[r])==0)
            r--;

            
            
            if (tolower(s[l]) == tolower(s[r])) 
    // equal ignoring c
            {l++;
            r--;
            }
               
            else
             return false;
                
            
            
        }
        return true;
       
        
    }
};
