class Solution {
  public:
    int largest(vector<int> &arr) {
       int m=arr[0];
       for(int i=1;i<arr.size();i++){
           if(arr[i] > m){
               m=arr[i];
           }
       }
       
       return m;
        
    }
};
