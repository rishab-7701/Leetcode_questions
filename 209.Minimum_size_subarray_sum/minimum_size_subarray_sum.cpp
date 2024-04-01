class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int ans = INT_MAX;
        long long sum = 0;

        while(j<nums.size()){
            sum+=nums[j];
            if(sum>=target){
                while(sum>=target){
                    sum-=nums[i];
                    i++;
                }
            i--;
            sum-=nums[i];
            ans=min(ans,j-i+1);
            }
            j++;
        }
        if(ans==INT_MAX) return 0;
        else return ans;
    }
};