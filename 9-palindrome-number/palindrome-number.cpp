class Solution {
public:
    bool isPalindrome(int x) {
        if((x<0)||(x%10==0&&x!=0)) return false;        
        long long b=0;
        int a=x;
        while(a>0){
            b=b*10+a%10;
            a/=10;
        }
        if(b==x) return true;
        else return false;
        
    }
};