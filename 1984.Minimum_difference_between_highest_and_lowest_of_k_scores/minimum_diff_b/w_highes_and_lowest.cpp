class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i=0,j=0;
        int res=INT_MAX;

        while(j<nums.size()){
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                //nums[j]-nums[i] finds the diff between the highest and the lowest value of window size k
                // as we have sorted the array so always nums[j] will have the highest value of a particular window
                // whereas nums[i] will always have the lowest value
                res=min(res,nums[j]-nums[i]);
                i++;
                j++;
            }
        }
        return res;
    }
};