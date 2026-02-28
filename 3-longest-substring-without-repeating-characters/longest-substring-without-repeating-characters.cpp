class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size=s.size();
        if(size==0) return 0;
        int index=0;
        int c=0;
        set<char> set;
        int ans=INT_MIN;
        while(c<size){
            if(set.find(s[c])==set.end()){
                set.insert(s[c]);
                c++;
                ans = max(ans, c - index);
                
            }else{
                while(set.find(s[c]) != set.end()){
                    set.erase(s[index]); // remove leftmost char
                    index++;             // move left pointer
                }
                set.insert(s[c]);
                c++;
                ans = max(ans, c - index);
            }
        }
        
        if(ans==INT_MIN) return 1;
        return ans;
    }
};