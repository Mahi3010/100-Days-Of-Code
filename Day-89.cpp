class Solution {
public:
    int numSub(string s) {
        int n = s.length(), mod = 1e9+7;
        int c =0;
        long  long a = 0;
        for(int i=0;i<n;i++){
        if(s[i] == '1'){
        c++;
            a+=c;
            a=a%mod;
        }
            else c=0;
        }
        return a%mod;
    }
};
