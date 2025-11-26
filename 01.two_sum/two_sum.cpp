// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int a=0,b=0;

//         for(int i=0;i<nums.size()-1;i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]+nums[j]==target)
//                 {
//                     a=i;
//                     b=j;
//                 }
//             }
//         }
//         return{a,b};
//     }
// };
//
//********************** Better and Optimized Solution using Hashmap ************
//
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map <int,int> mp;

       for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int moreNeeded = target-a;
            if(mp.find(moreNeeded)!=mp.end()){
                return {mp[moreNeeded],i};
            }
         mp[a]=i;
        }
        return {-1,-1};
    }
};
