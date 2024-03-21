class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int ex) {
          int mx=0;
          //for loop for iterating the vector named-'candies' to find the max value
          for(auto i:candies) mx=max(mx,i);

          vector <bool> ans(candies.size());
          for(int i=0;i<candies.size();i++){
             if(candies[i]+ex>=mx) ans[i]=1;
          }
          return ans;
    }
};