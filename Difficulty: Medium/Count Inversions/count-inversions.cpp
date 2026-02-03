class Solution {
  public:
    
    int merge(vector<int> &arr,int mid,int start,int end){
        int InvCount=0;
        int i=start,j=mid+1;
        vector<int> temp;
        while(i<=mid&&j<=end){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else{
                InvCount+=mid-i+1;
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=end){
            temp.push_back(arr[j]);
            j++;
        }
        for(i=0;i<temp.size();i++){
            arr[start+i]=temp[i];
        }
        return InvCount;
    }
    
    int mergeSort(vector<int> &arr,int start,int end){
        if(start<end) {
        int mid=start+(end-start)/2;
        
        int leftCount=mergeSort(arr,start,mid);
        int rightCount=mergeSort(arr,mid+1,end);
        
        int InvCount=merge(arr,mid,start,end);
        return InvCount+leftCount+rightCount;}
        return 0;
    }
  
    int inversionCount(vector<int> &arr) {
        // Code Here
        return mergeSort(arr, 0, arr.size() - 1);
    }
};