class Solution {
public:
    int numberOfMatches(int n) {
        int a=0;
        while(n>1){
            if(n%2==0){
                a += n/2;
                n = n/2;
            }
            else{
                a += (n-1)/2;
                n = (n-1)/2+1;
            }
        }
        return a;
    }
};