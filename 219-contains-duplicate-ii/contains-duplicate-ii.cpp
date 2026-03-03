class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
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
// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         unordered_set<int> s;
//         for(int i=0;i<nums.size();i++){
//             if(s.count(nums[i])){
//                 return true;
//             }
//             s.insert(nums[i]);
//             if(s.size()>k){
//                 s.erase(nums[i - k]);
//             }
//         }
//         return 0;
//     }
    
// };