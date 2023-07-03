//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;
class FirstRepeating {
    public static void main(String[] args) {

        // Taking input using class Scanner
        Scanner sc = new Scanner(System.in);

        // Taking total count of testcases
        int t = sc.nextInt();

        while (t-- > 0) {
            // taking total count of elements
            int n = sc.nextInt();

            // creating a new array of size n
            int arr[] = new int[n];

            // inserting elements to the array
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            Solution ob = new Solution();
            // calling firstRepeated method
            // and printing the result
            System.out.println(ob.firstRepeated(arr, n));
        }
        sc.close();
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    // Function to return the position of the first repeating element.
    public static int firstRepeated(int[] arr, int n) {
        // Your code here
        int max = arr[0];
        
        for(int i=1; i<n; i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        
        int[] hash = new int[max+1];
        for(int i=0; i<n; i++){
            hash[arr[i]]++;
        }
        
        for(int i=0; i<n; i++){
            if(hash[arr[i]] > 1){
                return i+1;
            }
        }
        return -1;
    }
}
