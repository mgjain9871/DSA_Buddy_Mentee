class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2)
                return 0;
        sort(nums.begin(),nums.end());
        int i=0,j=1,ans=0;
        while(i<nums.size()-1){
            ans=max(ans,nums[j]-nums[i]);
            i++;
            j++;
        }
        return ans;
    }
};