class Solution {
  public:
    void sort012(vector<int>& vec) {
       
    
        int n=vec.size();
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(vec[mid]==0){
                swap(vec[low],vec[mid]);
                low++;
                mid++;
            }
            else if(vec[mid]==1){
                mid++;
            }
            else{
                swap(vec[high],vec[mid]);
                high--;
            }}
        
    }
};