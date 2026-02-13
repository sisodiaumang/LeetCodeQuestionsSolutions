class Solution {
public:
    string addBinary(string a, string b) {
        int size_a=a.size()-1;
        int size_b=b.size()-1;
        int carry=0;
        string ans="";
        int sum;

        while(size_a>=0||size_b>=0||carry!=0){
            int sum=carry;

            if(size_a>=0) sum+=a[size_a--]-'0';
            if(size_b>=0) sum+=b[size_b--]-'0';

            ans+=(sum%2)+'0';
            carry=sum/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};