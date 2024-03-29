class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
       int m=0,n=0,l=nums.size();
        for(int k=0;k<l;++k){
            if(nums[m]<nums[k]) m=k;
            if(nums[n]>nums[k]) n=k;
        }
        return min({max(m+1,n+1), max(l-m,l-n), m+1+l-n, n+1+l-m});
    }
};
