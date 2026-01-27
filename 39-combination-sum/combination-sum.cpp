class Solution {
public:
    set<vector<int>> s;
    void solver(vector<int> &vec,int target,int index,vector<vector<int>> &ans,vector<int> &c){
       
        if(index==vec.size()||target<0){
            return;
        }
        if(target==0){
            if(s.find(c)==s.end()){
                ans.push_back(c);
                s.insert(c);
                return;
            }
            
        }


        c.push_back(vec[index]);
        solver(vec,target-vec[index],index+1,ans,c);
        solver(vec,target-vec[index],index,ans,c);
        c.pop_back();
        solver(vec,target,index+1,ans,c);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combination;
        int size=candidates.size();
        solver(candidates,target,0,ans,combination);
        return ans;
    }
};