class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector <int> arr;
        //copying the contents of vector heights into a new vector arr for comparing in the later steps
        for(int i=0;i<heights.size();i++){
            arr.push_back(heights[i]);
        }
        int c=0; // counter variable to count the number if mismatched indices

        sort(arr.begin(),arr.end());

        for(int i=0;i<heights.size();i++){
            if(arr[i]!=heights[i]){
                c++;
            }
        }
        return c;
    }
};