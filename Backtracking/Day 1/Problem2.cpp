https://leetcode.com/problems/letter-combinations-of-a-phone-number/

class Solution {
public:
void helper(string digits, int ind, vector<string>& letter, string &temp ,vector<string> &res)
{
    if(ind==digits.size())
    {
      res.push_back(temp);
      return;
    }
    string tem=letter[digits[ind] - '0'];
    for(auto it:tem)
    {
        temp.push_back(it);
        helper(digits,ind+1,letter,temp,res);
        temp.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        
        vector<string> res;
        string temp="";
        if(digits.empty()) return res;
        vector<string>letter({"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"});

        helper(digits, 0,letter, temp,res);
        return res;
    }

};
