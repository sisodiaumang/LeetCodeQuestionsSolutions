// class Solution {
// public:
//     double myPow(double x, long long n) {
//         double ans=1;
//         if(n<0){
//             n=n*(-1);
//             x=1/x;
//         }
//         // while(n>0){
//         //     if(n%2==1){
//         //         ans=ans*x;
//         //     }
//         //     x=x*x;
//         //     n=n/2;
//         // }
//         ans=pow(x,n);
//         return ans;
//     }
// };
class Solution {
public:
    double myPow(double x, int n) {
        double power = 1;
        long long N = n;
        if (n>0) {
            power =  pow(x,n);
        }
        else if (n<0){
            x = 1/x;
            N = -N;
            power = pow(x,N);
        }
        return power;
        
    }
};