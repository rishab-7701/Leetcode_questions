class Solution {
public:
    string largestOddNumber(string num) {
        int i = num.size()-1;
        while(i>=0){
            if(num[i]%2==1){
                return num.substr(0,i+1);  // as soon as we get an odd digit in the string num we will return the string from the start till then the next iteration of i as substring extracts the string till i-1 position
            } //checking for odd number
           i--;
        }
        return "";  
    }
};