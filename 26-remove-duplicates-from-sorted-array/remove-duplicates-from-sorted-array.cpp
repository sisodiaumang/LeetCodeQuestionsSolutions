class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int not_unique=0;

        int size=nums.size();
        vector<int> box;

        for(int i=0;i<size;i++){
            if(find(box.begin(), box.end(),nums[i])==box.end()){
                box.push_back(nums[i]);
            }
            else{
                not_unique++;
            }
            
        }
        nums=box;
        return size-not_unique;
    }
};