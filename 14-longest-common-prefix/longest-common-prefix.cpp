class Solution {
public:
    bool prefix(vector<string>& strs,int mid){
        for(int i=1;i<strs.size();i++){
            if(strs[0].substr(0,mid)!=strs[i].substr(0,mid)){
                return false;
            }
        }
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int high = strs[0].size();
        int mid;
        int low=0;
        string ans;
        for(int i = 1; i < strs.size(); i++) {
        high = min(high, (int)strs[i].size());
        }
        while(high>=low){
            mid=(high+low)/2;
            if(prefix(strs,mid)){
                ans=strs[0].substr(0,mid);
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        return ans;
    }
};