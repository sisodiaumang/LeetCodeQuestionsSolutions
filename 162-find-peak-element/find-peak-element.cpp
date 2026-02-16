// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int size=nums.size();
//         if(size==1) return 0;
//         else if(size==2&&nums[0]>=nums[1]) return 0;
//         else if(size==2&&nums[0]<nums[1]){
//             return 1;
//         }
//         for(int i=1;i<size-1;i++){
//             if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]) return i;
//         }
//         if(nums[size-1]>nums[size-2]) return size-1;
//         return 0;
//     }
// };
class Solution {
    public:
        int findPeakElement(vector<int>& nums) {
            int size=nums.size()-1;
            if(size==0) return 0;
            int start=0;
            int mid;
            while(start < size){
                mid=start+(size-start)/2;
                if(nums[mid]>nums[mid+1]){
                    size=mid;
                }
                else{
                    start=mid+1;
                }
            }
            return start;
        }
};