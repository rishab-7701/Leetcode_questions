class Solution {
public:
    bool checkIfPangram(string sentence) {
        // we use set data structure because set does not contains any repeated elements
        set<char>s;
        for(int i=0;i<sentence.size();i++){
            s.insert(sentence[i]);
        }
        // total no. of english alphabets are 26 so if set contains 26 characters then it is a panagram
        if(s.size()==26) return true;
        else return false;
    }
};