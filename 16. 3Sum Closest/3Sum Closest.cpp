class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int resultSum = nums[0]+nums[1]+nums[2];
        int minDiff = INT_MAX;

        //fix the first element and find the other two elements
        for(int i=0;i<nums.size()-2;i++){
            //Finding the other two elements using Two Sum approach
            int left = i+1;
            int right = nums.size()-1;

            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                
                if(sum == target) return sum;
                else if(sum < target) left++;
                else right--;

                //now we will store the min diff of sum and target
                int difftoTarget = abs(sum - target);
                if(difftoTarget < minDiff){
                    // we will update the result sum
                    resultSum = sum;
                    minDiff = difftoTarget
                }
            }
        }
        return resultSum;   
    }
};