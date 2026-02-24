class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size=nums.size()-1;
        int start=0;
        int mid;

        while(start<=size){
            mid=start+(size-start)/2;
            if(target==nums[mid]){
                return mid;
            }
            if(target<nums[mid]){
                size=mid-1;
            }
            else{
                start=mid+1;
            }

        }
        
        return start;

    }
};