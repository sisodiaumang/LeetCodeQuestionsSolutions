class Solution {
  public:
  
    void merge(vector<int>&arr,int l ,int r,int mid){
        int p1=l,p2=mid+1;
        vector<int> temp;
        while(p1 <= mid && p2 <= r){
            if(arr[p1]<arr[p2]){
                temp.push_back(arr[p1]);
                p1++;
            }
            else{
                temp.push_back(arr[p2]);
                p2++;
            }
        }
        while(p1<=mid){
            temp.push_back(arr[p1]);
            p1++;
        }
        while(p2<=r){
            temp.push_back(arr[p2]);
            p2++;
            
        }
        
        for(int k=0;k<temp.size();k++){
            arr[l]=temp[k];
            l++;
        }
        
    }
    void mergeSort(vector<int>& arr, int l, int r) {
            if (l >= r) return;

            int mid=l+(r-l)/2;
            
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            
            merge(arr,l,r,mid);
        
        
        
    }
};