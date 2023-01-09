https://leetcode.com/problems/matrix-block-sum/description/

class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
         vector<vector<int>>arr(n+1,vector<int>(m+1));
         for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=m;j++)
             {
                 arr[i][j]=arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1]+mat[i-1][j-1];
             }
         }
          vector<vector<int>>ans(n,vector<int>(m));
         
          for(int i=0;i<n;i++)
         {
             for(int j=0;j<m;j++)
             {
                 int x1=max(0,i-k);
                int y1=max(0,j-k);
                int x2=min(n-1,i+k);
                int y2=min(m-1,j+k);
                ans[i][j]=arr[x2+1][y2+1]-arr[x1][y2+1]-arr[x2+1][y1]+arr[x1][y1];
             }
         }
         return ans;
    }
};
