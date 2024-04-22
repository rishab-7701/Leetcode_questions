// Consider an Example to understand this leetcode problem better
//Input: nums=[3,0,1] size of nums=3;
//Output: 2 (which is the only missing number in the range of [0,n])
//Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 
//2 is the missing number in the range since it does not appear in nums

class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
       int sum = (n*(n+1)/2); // formula to find the sum of first n whole/natural numbers = (n*(n+1)/2)
       int s=0;
       for(int i=0;i<nums.size();i++){
            s=s+nums[i];
       }
       return sum-s; 
       // the logic is that we calculated the sum of n natural numbers according to the size of nums
       // after that we need to calculate the sum of the given vector nums and simply subtract both
       // the sums to get the value which is equal to the missing number in the array
    }
};