
class Solution {
    /**
    * @param number[] arr

    * @returns number
    */
    largest(arr) {
        let i;
        let t=arr[0];
      
        for(i=1;i<arr.length;i++){
            if(arr[i] > t){
                t=arr[i];
            }
        }
      return t;  
    }
}
