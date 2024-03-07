class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>sq;
        for(auto num:nums)
        {
            num*=num;
            sq.push_back(num);
        }
        sort(sq.begin(),sq.end());
        return sq;
    }
};