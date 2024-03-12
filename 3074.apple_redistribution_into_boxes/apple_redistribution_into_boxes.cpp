class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());
        int sum=0;

        // here we will calculate the total no of of apples and store it in variable sum

        for(int i=0;i<apple.size();i++){
            sum+=apple[i];
        }

        int ans=0;
        //here we will calculate the number of boxes required to store the total no of apples

        for(int i=capacity.size()-1;i>=0;i--){
            ans++;
            sum-=capacity[i];
            if(sum<=0) break;
        }
        return ans;
    }
};