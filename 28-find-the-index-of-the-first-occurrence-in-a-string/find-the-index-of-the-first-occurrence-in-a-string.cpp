class Solution {
public:
    int strStr(string haystack, string needle) {
        int size=haystack.size();
        int nsize=needle.size();
        int p1=0,p2=0;
        int t=0;
        while(p1!=size){
            if(haystack[p1]==needle[p2]){
                p1++;p2++;
                if(p2==nsize) return t;
            }
            else{
                p1=t+1;
                p2=0;
                t=p1;
            }
        }
        return -1;

    }
};

// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int size=haystack.size();
//         int nsize=needle.size();

//         for(int i=0;i<size-nsize+1;i++){
//             if(needle==haystack.substr(i,nsize)){
//                 return i;
//             };
//         }
//         return -1;


//     }
// };