class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();
        if(size==0) return 0;
        int ptr2=0;
        for(int i=1;i<size;i++){
            if(nums[i]!=nums[ptr2]){
                ptr2++;
                nums[ptr2]=nums[i];
            }
        }

        return ++ptr2;
    }
};