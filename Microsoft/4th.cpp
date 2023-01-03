# Leetcode 396 : Rotate Function
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum=0,add=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            add+=i*nums[i];
        }
        int mx=add;
        for(int i=n-1;i>=0;i--)
        {
            add+=(sum-(nums[i]*n));
            mx=max(mx,add);
        }
        return mx;
    }
};
