class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        string part;
        for(int i=0;i<strs[0].size();i++){
            for(int j=1;j<strs.size();j++){
                if(strs[0].substr(0,i+1)==strs[j].substr(0,i+1)){
                    
                }
                else{
                    return ans;
                }
                part=strs[0].substr(0,i+1);
            }
            ans=ans+strs[0][i];
        }
        return ans;
    }
};