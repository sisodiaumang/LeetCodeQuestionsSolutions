class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ptr2=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[ptr2]){
                ptr2++;
                nums[ptr2]=nums[i];
            }
        }
        return ++ptr2;
    }
};