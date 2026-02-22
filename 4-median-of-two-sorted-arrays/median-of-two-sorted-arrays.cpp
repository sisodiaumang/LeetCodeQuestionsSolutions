class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int k=n+m;
        vector<int> ans;
        int ptr2=0;
        int ptr1=0;
        bool even;
        if((k)%2==0){
            k=(k/2)+1;
            even =true;
        }
        else{
            k=k/2+1;
            even =false;
        }
        // for(int i=0;i<=n;i++){
        //     if(nums1[ptr1]<nums2[ptr2]){
        //         ans[i]=nums1[ptr1++];
        //     }
        //     else{
        //         ans[i]=nums2[ptr2++];
        //     }
        // }
        int i=0;
        while(i<k&&ptr1<n&&ptr2<m){
            if(nums1[ptr1]<nums2[ptr2]){
                ans.push_back(nums1[ptr1]);
                ptr1++;
                i++;
            }
            else{
               ans.push_back(nums2[ptr2]);
                ptr2++;
                i++;
            }
        }
        while(i<k&&ptr1<n){
            ans.push_back(nums1[ptr1]);
            ptr1++;
            i++;
        }
        while(i<k&&ptr2<m){
            ans.push_back(nums2[ptr2]);
            ptr2++;
            i++;
        }
        if(even){
            return (ans[k-2]+ans[k-1])/2.0;
        }
        return ans[k-1];
    }
};