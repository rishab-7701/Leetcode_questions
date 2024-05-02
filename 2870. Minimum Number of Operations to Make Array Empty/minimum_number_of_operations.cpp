class Solution {
public:
    int minOperations(vector<int>& nums) {
        //declard a map for storing frequency of each element in nums
        unordered_map <int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        // Minimum number of Operations to make an array empty
        int cnt=0;
        for(auto i:mp){
            int num = i.second;
            while(num>0){
              if(num%3==0) num-=3;
              else if(num>=2) num-=2;
              else return -1; // If the freq of element is 1 we can't do any operation
              cnt++;
            }
        }
        return cnt;
    }
};