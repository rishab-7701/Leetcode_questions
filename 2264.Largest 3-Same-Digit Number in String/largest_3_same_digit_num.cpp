class Solution {
public:
    string largestGoodInteger(string num) {
        int size = num.length();
        string str;
        int maxi=0;
        string res="";
        int c=0;
        int x=0;


        for(int i=0;i<size-1;){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                x=1;
                str = num.substr(i,3);
                 int n = stoi(str); // converting str into integer for finding max value of good integers
                 if(n==0 && c!=2){ // this signifies that "000" is the first good integer then resultant will be "000"
                    res="000";
                    c=1;
                    i+=3;
                 }
                 else{
                    maxi = max(maxi,n);
                    i+=3;
                    c=2; 
                 }
                
            }
            else {
                i++;
            }
        }
        
         if(c==2){
           res = to_string(maxi);
         }
       
        if(x==0) return "";
        else return res;
    }
};