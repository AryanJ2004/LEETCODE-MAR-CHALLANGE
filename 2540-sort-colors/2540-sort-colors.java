public class Solution {
    public void sortColors(int[] A) {
     /*
     Space Complexity O(1);
     Time Compleixty O(n);
     */
       if(A == null || A.length == 0){
           return;
       }
       int red = 0;
       int white = 1;
       int blue = A.length-1;
       int i = 0;
       while(i <= blue){
           if(A[i] == 0){
               int temp = A[red];
               A[red] = A[i];
               A[i] = temp;
               red++;
           }else if(A[i] == 1){
               
           }else if(A[i] == 2){
               int temp = A[i];
               A[i] = A[blue];
               A[blue] = temp;
               blue--;
               i--;
           }
           i++;
       }
    
    }
}