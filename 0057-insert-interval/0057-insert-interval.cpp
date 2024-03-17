class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        int i = 0;
        vector<vector<int>> ans;
        while(i < n && intervals[i][1] < newInterval[0])
            ans.push_back(intervals[i++]);
        if(i < n) newInterval[0] = min(newInterval[0], intervals[i][0]);
        
        while(i < n && intervals[i][0] <= newInterval[1]) ++i;

        if(i-1 >= 0)
            newInterval[1] = max(newInterval[1], intervals[i-1][1]);
        ans.push_back(newInterval);

        while(i < n) ans.push_back(intervals[i++]);
        
        return ans;
    }
};