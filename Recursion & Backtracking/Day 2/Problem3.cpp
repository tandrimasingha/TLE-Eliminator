https://leetcode.com/problems/different-ways-to-add-parentheses/

class Solution {
public:
    int perform(int x,int y, char ch)
    {
    if(ch=='+') return x+y;
    if(ch=='-') return x-y;
    if(ch=='*') return x*y;
    return 0;
    }
  vector<int> diffWaysToCompute(string expression) {
        vector<int> ans;
    bool nope=true;
    for(int i=0;i<expression.size();i++)
    {
       
        if(!isdigit(expression[i]))
        {
             nope=0;
            vector<int> left=diffWaysToCompute(expression.substr(0,i));
            vector<int> right=diffWaysToCompute(expression.substr(i+1));
            for(int &x:left)
            {
                for(int &y:right)
                {
                int v=perform( x, y, expression[i]);
                ans.push_back(v);
                }
            }
        }
    }
    if(nope) ans.push_back(stoi(expression));
    return ans;  
    }
};
