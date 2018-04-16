import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        char[] charA = A.toCharArray();
        char[] charB = new char[A.length()];
        
        for(int i = 0; i < A.length(); i++){
            charB[i] = charA[A.length()-i-1];
        }
        
        String B = String.valueOf(charB);
        
        if(Objects.equals(A,B)){
            System.out.println("Yes");
        }
        else{
           
            System.out.println("No");
}
        
    }
}
