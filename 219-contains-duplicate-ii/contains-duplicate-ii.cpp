class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int size=nums.size();
        int i;
        for(i=0;i<size;i++){
            if(m.find(nums[i]) != m.end()){
                if(abs(m[nums[i]]-i)<=k){
                    return true;
                }
            }
            m[nums[i]]=i;  
        }
        return 0;
    }
    
};