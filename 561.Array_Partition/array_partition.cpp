class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        // we will firstly sort the array in  ascending order. 
        // so that we only we need to traverse once to get the minimum value between pairs

        sort(nums.begin(),nums.end());
        int i=0,j=0,s=0
        int mx;

        while(j<nums.size()){
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1==k){
                mx=min(nums[i],nums[j]);
                s=s+mx;
                i+=2;
                j+=2;
            }
        }
        return s;
    }
};