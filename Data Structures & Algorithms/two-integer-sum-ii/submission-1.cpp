class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        int n = numbers.size();
        vector <int> v;

        int l = 0, r = n-1;

        while(l<r)
        {
            if (numbers[l]+numbers[r]== target)
            {
                v={l+1,r+1};
                l++;
                r--;
            }

            else if(numbers[l]+numbers[r]<target)
            l++;

            else
            r--;
        }
        return v;
    }
};
