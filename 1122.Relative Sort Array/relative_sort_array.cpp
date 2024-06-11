// Example 1:
// Input: arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]
// Output: [2,2,2,1,4,3,3,9,6,7,19]

// Example 2:
// Input: arr1 = [28,6,22,8,44,17], arr2 = [22,28,8,6]
// Output: [22,28,8,6,17,44]

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       int maxElement = *max_element(arr1.begin(),arr1.end());
       vector <int> count(maxElement+1);

       // counting the occurences of each element in arr1
       for(int element : arr1){
          count[element]++;
       }

       vector<int> result; // vector to store the sorted array
       // adding elements to the result array as per the relative positioning of elements in arr2
       for(int element:arr2){
            while(count[element]>0){
                result.push_back(element);
                count[element]--;
            }
       }

       // adding the remaining elements that are not in arr2
       for(int num=0;num<=maxElement;num++){
            while (count[num]>0)
            {
                result.push_back(num);
                count[num]--;
            }
       }
       return result;
    }
};