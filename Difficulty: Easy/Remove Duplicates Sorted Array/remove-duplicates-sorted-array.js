class Solution {
    // Function to remove duplicates from the given array.
    removeDuplicates(arr) {
       let duplicate=[];
       if(arr.length === 0) return duplicate;
       
       duplicate.push(arr[0]);
       
       for(let i=1;i<arr.length;i++){
           if(arr[i] != arr[i-1]){
               duplicate.push(arr[i]);
           }
       }
       return duplicate; 
    }
}
