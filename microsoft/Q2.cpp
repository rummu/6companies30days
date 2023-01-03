class Solution {
public:
 void helper(int k,int n,vector<int> &c,vector<vector<int>> &ans,vector<int> &v)
    {
        if(k==0 && n==0)
        {
            ans.push_back(c);
            return;
        }
        if(k<0 || n<0)
            return;
        for(int i=1;i<=9;i++)
        {
            if(v[i]==0 && n>=i && (c.size()>0?i>c[c.size()-1]:true))
            {
                v[i]=1;
                c.push_back(i);
                helper(k-1,n-i,c,ans,v);
                c.pop_back();
                v[i]=0;
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> visited(10,0);
        vector<vector<int>> ans;
        vector<int> curr;
        helper(k,n,curr,ans,visited);
        return ans;
    
    }
};