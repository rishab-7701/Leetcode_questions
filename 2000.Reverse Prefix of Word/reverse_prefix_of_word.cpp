// This a daily challenge problem of leetcode for the date 1st May

class Solution {
public:
    string reversePrefix(string word, char ch){
          int size = word.length();
          int index = word.find(ch);
          string str = word.substr(0,index+1);
          string s; // variable to store reversed substring

          // for loop for reversing the word till the index where we found the prefix
          for(int i=str.length()-1;i>=0;i--){
            s+=str[i];
          }

          string s1 = word.substr(index+1,((size-1)-index));
          string res = s.append(s1);

          return res;
    }
};