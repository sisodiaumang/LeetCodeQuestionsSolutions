class Solution {
public:
    string convert(string s, int numRows) {
        int size=s.size();
        if(numRows==1||size==numRows) return s;
        string ans="";
        int second;
        int cycle = 2 * (numRows - 1);
        for(int i=0;i<numRows;i++){
            for(int r=i;r<size;r+=cycle){
                ans+=s[r];
                second = r + cycle - 2 * i;

                if (i != 0 && i != numRows - 1 && second < size) {
                    ans += s[second];
                }
                }
            }

        return ans;
    }
};