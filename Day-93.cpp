class Solution {
public:
    int minDeletionSize(vector<string>&s) {
         int col=s[0].length();
        int row=s.size();
        int ans=0;
        for(int i=0;i<col;i++)
        {
            for(int j=0;j<row-1;j++)
            {
                if(s[j][i]>s[j+1][i])
                {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};
