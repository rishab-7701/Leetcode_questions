class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0) return true;
        int x = floor(sqrt(c));
        
        int i=1;
        while(i<=x){
            int a = c-i*i;
            int sq = sqrt(a);
            // int sum = ;
            if((sq*sq + i*i)==c && sq <=x){
                return true;
            }
            i++;
        }
        return false;
    }
};