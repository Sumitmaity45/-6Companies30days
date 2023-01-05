# Leetcode 581 : Shortest Unsorted Continuous Subarray
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>ans=nums;
        int a,b;
        sort(nums.begin(),nums.end());
        if(nums==ans) return 0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=ans[i])
               { 
                  a=i;
                  break;
               }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]!=ans[i])
              {
                b=i;
                break;
              }
        }
        return b-a+1;
    }
};
