class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        else if(x%10==0&&x!=0) return false;
        else{
            long long a;long long b=0;
            a=x;
            while(a>0){
                b=b*10+a%10;
                a/=10;
            }
            if(b==x) return true;
            else return false;
        }
        return -1;
    }
};