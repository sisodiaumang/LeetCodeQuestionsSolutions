class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        int sn=0,sm=0;
        int e=n*m;
        vector<int> ans;
        while(e>0){
            for(int i=sm;i<=m-1;i++){
                ans.push_back(matrix[sn][i]);
                e--;
            }
            if(e<=0) break;
            for(int i=sn+1;i<=n-1;i++){
                ans.push_back(matrix[i][m-1]);
                e--;
            }
            if(e<=0) break;
            for(int i=m-2;i>=sm;i--){
                ans.push_back(matrix[n-1][i]);
                e--;
            }
            if(e<=0) break;
            for(int i=n-2;i>=sn+1;i--){
                ans.push_back(matrix[i][sm]);
                e--;
            }
            if(e<=0) break;
            sn++;
            sm++;
            n--;
            m--;
            
        }
        return ans;
    }
};