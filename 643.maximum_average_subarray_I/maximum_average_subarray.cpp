class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=0;
        int sum=0;
        int mx=INT_MIN;

        while(j<nums.size()){
            sum=sum+nums[j];

            //till the time window size is less than 'k' we will only increase 'j' to reach till the window size
            if(j-i+1 < k){
                j++;
            }
            //as soon as we hit the window size 'k' we will do the desired calculations asked in the ques
            else if(j-i+1 == k){
               mx=max(sum,mx);
               sum=sum-nums[i];
               i++;
               j++;
            }
       }
       //while returning we will divide the maximum sum stored in variable 'mx' by 'k' to get the max average
       return (double)mx/k;
    }
};