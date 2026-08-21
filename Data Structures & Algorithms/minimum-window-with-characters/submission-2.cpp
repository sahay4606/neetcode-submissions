class Solution {
public:
    string minWindow(string s, string t) 
    {
        vector <int> fmv (128,0);
        vector <int> mv (128, 0);
        int l = 0;
        int r = 0;
        int minl = INT_MAX;
        int start =0 , end =0;



        int required =0 , fixed =0;

        for(int c : t)// t not s 
        fmv[c]++;// this converts letter in t to respective ascii for the iteration

        for (int x : fmv)// t not s       // use that fmv to find unique
        if (x>0)// not fmv[x] > 0 .. fmv ke sare values we are given on plate one by one
        fixed  ++;

        for (int r = 0 ; r < s.size(); r ++  )
        {
            mv[s[r]]++;

            if (fmv[s[r]] >0 && fmv[s[r]]== mv[s[r]]) //fmv[s[r]] if this >0 to be checked ...
            required ++;

            while(required == fixed)
            {
               

                if (  r + 1 - l<    minl)     // wrote as opposite
                 {minl = min(minl, r +1 - l);
                start =l ;}
               // no end needed

               mv[s[l]]--;

               if( fmv[s[l]] > mv[s[l]])
               required --; 

               l++;

               

            }
        }
           return (minl == INT_MAX ? "" : s.substr(start ,minl));//
        



        
    }
};
