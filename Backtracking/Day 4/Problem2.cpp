https://leetcode.com/problems/permutations-ii/

class Solution {
public:
    void help(vector<int> &nums, int ind, set<vector<int>> &res)
    {
        if(ind==nums.size()-1)
        {
            res.insert(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[ind],nums[i]);
            help(nums, ind+1,res);
            swap(nums[ind],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        set<vector<int>> v;
        help(nums,0,v);
        for(auto it:v)
        {
            res.push_back(it);
        }
        return res;
    }
};
