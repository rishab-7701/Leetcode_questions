class Solution {
public:
    int firstUniqChar(string s) {
       // we will firstly declare a map so that we can store the count of each character from input string s
       unordered_map <char,int> mp;
       
       // we use this for loop to iterate each character of string s and to store each character
       // in key-value pairs
       for(auto ch:s){
        mp[ch]++;
       }

       for(int i=0;i<s.size();i++){
          if(mp[s[i]]==1){ // this if condition checks where the map 'mp' contains the first occurence
            return i;      // of the character s[i] and as soon as we get it,it return its index otherwise -1
          }
       }
       return -1;
    }
};