class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        if(n > m) return findMedianSortedArrays(nums2, nums1);
        if(m==0){
            if(n%2==0){
                return (nums1[n/2-1]+nums1[n/2])/2.0;
            }
            else{
                return nums1[n/2];
            }
        }
        if(n==0){
            if(m%2==0){
                return (nums2[m/2-1]+nums2[m/2])/2.0;
            }
            else{
                return nums2[m/2];
            }
        }
        int ne=(n+m+1)/2;
        int start=0;
        int end=n;
        int cut1,cut2;
        int left1,left2,right1,right2;
        while(start<=end){
            cut1=(start+end)/2;
            cut2=ne-cut1;
            left1  = (cut1 == 0) ? INT_MIN : nums1[cut1-1];
            right1 = (cut1 == n) ? INT_MAX : nums1[cut1];

            left2  = (cut2 == 0) ? INT_MIN : nums2[cut2-1];
            right2 = (cut2 == m) ? INT_MAX : nums2[cut2];

            if(left1<=right2&&left2<=right1){
                break;
            }
            if(left1 > right2){
                end=cut1-1;
            }
            else{
                start=cut1+1;
            }
            cut2=ne-cut1;
        }

        if((n+m)%2==0){
            return (max(left1, left2) + min(right1, right2)) / 2.0;
        }
        else{
            return max(left1, left2);
        }
        

    }
};






//         int n=nums1.size();
//         int m=nums2.size();
//         int k=n+m;
//         vector<int> ans;
//         int ptr2=0;
//         int ptr1=0;
//         bool even;
//         if((k)%2==0){
//             k=(k/2)+1;
//             even =true;
//         }
//         else{
//             k=k/2+1;
//             even =false;
//         }
//         // for(int i=0;i<=n;i++){
//         //     if(nums1[ptr1]<nums2[ptr2]){
//         //         ans[i]=nums1[ptr1++];
//         //     }
//         //     else{
//         //         ans[i]=nums2[ptr2++];
//         //     }
//         // }
//         int i=0;
//         while(i<k&&ptr1<n&&ptr2<m){
//             if(nums1[ptr1]<nums2[ptr2]){
//                 ans.push_back(nums1[ptr1]);
//                 ptr1++;
//                 i++;
//             }
//             else{
//                ans.push_back(nums2[ptr2]);
//                 ptr2++;
//                 i++;
//             }
//         }
//         while(i<k&&ptr1<n){
//             ans.push_back(nums1[ptr1]);
//             ptr1++;
//             i++;
//         }
//         while(i<k&&ptr2<m){
//             ans.push_back(nums2[ptr2]);
//             ptr2++;
//             i++;
//         }
//         if(even){
//             return (ans[k-2]+ans[k-1])/2.0;
//         }
//         return ans[k-1];