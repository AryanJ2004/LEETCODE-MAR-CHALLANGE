class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans = 0;
        int maxFreq = numeric_limits<int>::min();
        vector<int> count(101, 0);

        for (int num : nums) count[num]++;
        for (int num : count) maxFreq = max(maxFreq, num);        
        for (int num : nums) if (maxFreq == count[num]) ans++;
        return ans;
    }
};