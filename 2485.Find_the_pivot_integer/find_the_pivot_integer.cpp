class Solution {
public:
    int pivotInteger(int n) {
       int sum = (n*(n+1)/2); // sum of whole array
       int sum2 = 0; // to store the sum of beginning elements/left side

       for(int i=1;i<=n;i++){
        sum2+=i; //calulating the sum of left side or beginning elements
 
        // sum of right side = sum of total elements(sum)-sum of the beginning elements/left side
        // if sum of right side == sum of left side (pivot element i is found)
        if(sum-sum2+i==sum2){
            return i;
        }
       }
       return i;
    }
};