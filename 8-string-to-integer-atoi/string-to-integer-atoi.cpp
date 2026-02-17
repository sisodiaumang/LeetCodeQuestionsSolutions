class Solution {
public:
    int myAtoi(string s) {
        
        if(s=="") return 0;
        bool isneg=false;
        long long number=0;
        int k;
        for(k=0;k<s.size();k++) {
            if(s[k]!=' ') break;
        }
        s = s.substr(k);
        
        if(s[0]=='-') isneg=true;
        if(s[0]=='+') s=s.substr(1);
        for(int i=isneg?1:0;i<s.size();i++){
            if(number>=INT_MAX) break;
            if(s[i]>=48&&s[i]<=57){
            number=number*10+(s[i]-'0');}
            else{
                break;
            }
        }
        if(number>=INT_MAX&&!isneg){
            return INT_MAX;
        }
        if(isneg&&-number<=INT_MIN){
            return INT_MIN;
        }
        return isneg?-number:number; 
    }
};

// class Solution {
//     public:
//         int myAtoi(string s) {
//             if(s=="") return 0;
//             bool isneg=false;
//             long long number;
//             s = s.substr(s.find_first_not_of(' '));
//             if(s[0]=='-') isneg=true;
//             s=s.substr(1);

//             number=s-'0';
//             return isneg?(number<INT_MIN?-2147483648:-number):number>INT_MAX?2147483647:number;

//         }
// };