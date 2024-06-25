class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();
       
        //loop for finding the break point
        for(int i = n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind = i;
                break;
            }
        }
        
        // this condition is for handling the edge 
        if(ind == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        
        // Find the smallest element larger than nums[ind] from the end in the reverse looping of array
        for(int i=n-1;i>ind;i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        
        // reversing every element after the break point to get the next permutation
        reverse(nums.begin() + ind + 1 , nums.end());
        return;
    }
};