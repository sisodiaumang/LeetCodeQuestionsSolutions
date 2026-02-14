class Solution {
public:
    int mySqrt(long long x) {
        if(x==1) return 1;
        int n=x/2;
        int start=0;
        long long mid=-1;
        int m=-1;
        while(start<=n){
            mid=start+(n-start)/2;
            if(mid*mid==x){
                return (int) mid;
            }
            else if(mid*mid>x){
                n=mid-1;
               
            }
            else{
                start=mid+1;
                m=mid;
            }
        }
        return m;
    }
};