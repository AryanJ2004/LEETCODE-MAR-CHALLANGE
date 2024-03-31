#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int count(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int ans = 0;
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++; 
            while (mp.size() > k) { 
                mp[nums[j]]--;
                if (mp[nums[j]] == 0) {
                    mp.erase(nums[j]);
                }
                j++;
            }
            ans += (i - j + 1);
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return count(nums, k) - count(nums, k - 1);
    }
};