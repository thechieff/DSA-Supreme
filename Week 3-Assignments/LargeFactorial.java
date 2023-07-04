//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class LargeFactorial
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int N = sc.nextInt();
            Solution ob = new Solution();
            ArrayList<Integer> ans = ob.factorial(N);
            for (Integer val: ans) 
                System.out.print(val); 
            System.out.println();
        }
        sc.close();   
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution {
    static ArrayList<Integer> factorial(int N){
        //code here
        ArrayList<Integer> arr = new ArrayList<Integer>();
        arr.add(1);
        int carry = 0;
        
        for(int i=2; i<=N; i++){
            for(int j=0; j<arr.size(); j++){
                int product = (arr.get(j))*i + carry;
                arr.set(j, product % 10);
                carry = product / 10;
            }
            while(carry!=0){
                arr.add(carry%10);
                carry /= 10;
            }
        }
        
        Collections.reverse(arr);
        return arr;
    }
}
