class Solution {
  public:
    
    int partition(vector<int>& arr, int low, int high) {
        int j,idx=low-1;
        for(j=low;j<high;j++){
            if(arr[j]<=arr[high]){
                idx++;
                swap(arr[j],arr[idx]);
            }
        }
        idx++;
        swap(arr[high],arr[idx]);
        return idx;
    }
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low>=high) return;
        int pivotIdx=partition(arr,low,high);
        quickSort(arr,low,pivotIdx-1);
        quickSort(arr,pivotIdx+1,high);
    }

  
};