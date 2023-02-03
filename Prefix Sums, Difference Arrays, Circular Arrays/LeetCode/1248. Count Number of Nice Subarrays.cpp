https://leetcode.com/problems/count-number-of-nice-subarrays/

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum=0;
        int c=0;
        mp[sum]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=(nums[i]%2);
            if(mp.find(sum-k)!=mp.end()) c+=mp[sum-k];
            mp[sum]++;
        }
        return c;
    }
};
