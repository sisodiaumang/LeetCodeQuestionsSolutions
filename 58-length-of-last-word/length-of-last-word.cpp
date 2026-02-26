class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        int size=s.size();
        while(size > 0 && s[size - 1] == ' '){
            size--;
        }
        for(int i=size-1;i>=0;i--){
            if(s[i]==' '){
                break;
            }
            c++;
        }
        return c;

    }
};