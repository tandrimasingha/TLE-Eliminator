https://leetcode.com/problems/combination-sum/description/

class Solution {
public:
    void findcombinationSum(vector<int>& candidates, int target,int n, vector<int>& ds,vector<vector<int>>& ans) {
        if(n==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
                
                
            }
            return;
        }
        if(candidates[n]<=target)
        {
            ds.push_back(candidates[n]);
            findcombinationSum(candidates, target-candidates[n],n,ds,ans);
            ds.pop_back();

        }
        findcombinationSum(candidates, target,n+1,ds,ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findcombinationSum(candidates, target,0,ds,ans);
        return ans;
        
    }
};
