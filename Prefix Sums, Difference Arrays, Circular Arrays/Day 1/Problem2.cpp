https://www.hackerrank.com/challenges/crush/problem


long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> pre(n+1,0);
    for(int i=0;i<queries.size();i++)
    {
        int l=queries[i][0]-1;
        int r=queries[i][1]-1;
        int k=queries[i][2];
        pre[l]+=k;
        pre[r+1]-=k;
        
    }
    long mx=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        pre[i]+=pre[i-1];
        mx=max(pre[i],mx);
    }
    return mx;
    
}
