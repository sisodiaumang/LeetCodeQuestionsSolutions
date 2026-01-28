class Solution {
public:
    bool isPalindrome(string s){
        string s2=s;
        reverse(s2.begin(),s2.end());
        return s==s2;
    }
    void solver(string s,vector<vector<string>> &ans,vector<string> &part){
        int n=s.length();
        
        if(n==0){
            ans.push_back(part);
            return;
        }

        for(int i=0;i<n;i++){
            string p=s.substr(0, i+1);
            if(isPalindrome(p)){
                part.push_back(p);
                solver(s.substr(i+1),ans,part);
                part.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partition;

        solver(s,ans,partition);
        return ans;
    }
};