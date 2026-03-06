class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int size=nums.size();
        int p1=0,p2=0;
        while(p1<size){
            if(nums[p1]%2==0){
                swap(nums[p1],nums[p2]);
                p1++;p2++;
            }
            else{
                p1++;
            }
        }
        return nums;
    }
};