https://leetcode.com/problems/next-greater-element-ii/

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n=nums.size();
        vector<int> v;
        for(int i=2*n-1;i>=0;i--)
        {
            if(st.empty()) v.push_back(-1);
            else if(!st.empty() && st.top()>nums[i%n]) v.push_back(st.top());
            else if(!st.empty() && st.top()<=nums[i%n])
            {
                while(!st.empty() && st.top()<=nums[i%n])
                {
                    st.pop();
                }
                if(st.empty()) v.push_back(-1);
                else
                v.push_back(st.top());
            }
            st.push(nums[i%n]);

        }
        vector<int> ans;
        reverse(v.begin(),v.end());
       
        for(int i=0;i<n;i++)
        {
            ans.push_back(v[i]);
        }
        return ans;
    }
};
