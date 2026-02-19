class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum;
        int size=nums.size()-1;
        long long current=INT_MAX;
        for(int i=0;i<size-1;i++){
            int front=i+1;
        int back=size;
            while(front<back){
                sum=nums[i]+nums[back]+nums[front];
                if(abs(target - sum) < abs(target - current)) {
                    current = sum;
                }
                if(target==sum) return sum;
                else if(target>sum){
                    front++;
                }
                else{
                    back--;
                }
                }
            }
        return current;
    }
};