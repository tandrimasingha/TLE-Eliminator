https://leetcode.com/problems/k-diff-pairs-in-an-array/

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        int ans=0;
        for(auto it:mp)
        {
            if(k==0)
            {
                if(it.second>1)  ans++;
            }
           
             else if(mp.find(it.first+k)!=mp.end())
            {
               
               ans++; 
            }
        }
        return ans;
    }
};
