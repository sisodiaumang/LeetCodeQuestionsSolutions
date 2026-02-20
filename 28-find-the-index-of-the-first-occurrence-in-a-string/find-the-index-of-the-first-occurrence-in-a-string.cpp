class Solution {
public:
    int strStr(string haystack, string needle) {
        int size=haystack.size();
        int nsize=needle.size();

        for(int i=0;i<size-nsize+1;i++){
            if(needle==haystack.substr(i,nsize)){
                return i;
            };
        }
        return -1;


    }
};