class Solution {
public:
    int minimumLength(string s) {
        int l=0;
        int r=s.length()-1;
        while(l<r && s[l]==s[r])
        {
            char current=s[r];
            while(l<=r && s[l]==current)
            {
            l++;
            }
            while(r>=l && s[r]==current)
            {
            r--;
            }
        }
        return r-l+1;
    }
};