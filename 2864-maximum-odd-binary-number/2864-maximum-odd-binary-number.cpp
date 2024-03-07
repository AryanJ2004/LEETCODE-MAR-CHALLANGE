class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.rbegin(),s.rend());
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='1')
            swap(s[i],s[s.size()-1]);
        }
        return s;
    }
};

/*=================2nd Approach===============
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt1=0;
        int cnt2=0;
        for(auto v:s)
        {
            if(v=='1')
            cnt1++;
            else if(v=='0')
            cnt2++;
        }
        string ans=string(cnt1-1,'1')+string(cnt2,'0')+'1';
        return ans;
    }
};*/
