class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();
        if(size==1) return 1;
        int p1=2;
        int p2=2;
        while(p2<size){
            if(nums[p2]!=nums[p1-2]){
                swap(nums[p2],nums[p1]);
                p2++;
                p1++;
            }
            else{
                p2++;
            }
            
        }
        return p1;
    }
};