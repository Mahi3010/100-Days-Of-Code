class Solution {
public:
    string convertToTitle(int columnNumber) {
          string s="";
        while(columnNumber>26){
            int rem = columnNumber%26;
            columnNumber=columnNumber/26;
            if(rem==0){
                rem = 26;
                columnNumber--;
            }
            s.push_back('A'+(rem-1));
        }
        s.push_back('A'+columnNumber-1);
        reverse(s.begin(),s.end());
        return s;
    }
};
