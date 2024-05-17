class Solution {
public:
    bool rotateString(string s, string goal) {
        int size = s.size();

        for(int i=0;i<size;i++){
            string s1 = s.substr(1,size-1)+s[0];
            // this line of code shifts the leftmost character of the string s to the rightmost position on every iteration
                
                if(s1==goal) {
                    return true;
                }
                
                s=s1;
        }
        return false;
    }
};