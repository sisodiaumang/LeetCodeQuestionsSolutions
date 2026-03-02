class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      

    unordered_set<int> s;

    for (int num : nums) {
        if (s.count(num)) return true;
        s.insert(num);
    }
    return false;
}
};


// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         int size=nums.size();
//         if(size==1) return false;
//         sort(nums.begin(),nums.end());
//         for(int i=1;i<size;i++){
//             if(nums[i-1]==nums[i]){
//                 return true;
//             }
//         }

//         return false;
//     }
        
// };