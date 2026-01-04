class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
       vector<int>duplicate;
       if (arr.empty()) return duplicate;   
        duplicate.push_back(arr[0]); 

       for(int i=1;i<arr.size();i++){
           
        //  
           if(arr[i] != arr[i-1]){
               duplicate.push_back(arr[i]);
           }
       }
      return duplicate;  
    }
};
