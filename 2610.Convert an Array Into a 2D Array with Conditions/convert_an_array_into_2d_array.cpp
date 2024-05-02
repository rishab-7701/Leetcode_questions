class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int>freq(nums.size()+1);
        vector<vector<int>> ans; //2d-array to store the answer

        for(int c:nums){
            if(freq[c]>=ans.size()){
                ans.push_back({}); // adds a row in the ans vector
            }

            // We will store the integer in the list ans corresponding to its current frequency.
            ans[freq[c]].push_back(c);
            freq[c]++; // we will increase the freq of 'c' once added to the ans vector(2-d array)
        }
        return ans;
    }
};