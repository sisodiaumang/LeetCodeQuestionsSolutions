class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();
        if(size <= 2) return size;
        int p1=2;
        int p2=2;
        while(p2<size){
            if(nums[p2]!=nums[p1-2]){
                nums[p1++] = nums[p2];
            }
            p2++;
            
        }
        return p1;
    }
};