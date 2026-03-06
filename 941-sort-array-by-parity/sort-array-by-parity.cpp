class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int size=nums.size();
        int p2=0;
        for(int p1=0;p1<size;p1++){
            if(nums[p1]%2==0){
                swap(nums[p1],nums[p2++]);
            }
        }
        return nums;
    }
};