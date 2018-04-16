import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
  
    public static String getSmallestAndLargest(String s, int k) {
     
        String smallest = "";
        String largest = "";
        // Complete the function
        // 'smallest' must be the lexicographically smallest substring of length 'k'
        // 'largest' must be the lexicographically largest substring of length 'k'
        
        ArrayList<String> list = new ArrayList<String>();
        for (int i = 0; (i+k)<s.length(); i++){
            list.add(s.substring(i,i+k));
        }
        list.add(s.substring(s.length()-k));
        
        smallest = list.get(0);
        largest = list.get(0);
        
        for(int i = 0; i<list.size(); i++){
            for(int j = 0; j<k; j++){
                if ((int)list.get(i).charAt(j) > (int)largest.charAt(j)){
                    largest = list.get(i);
                   
                }
                 else if ((int)list.get(i).charAt(j) == (int)largest.charAt(j)){
                    continue;
                }
                else{
                    break;
                }
                
                    }
        }
        
        for(int i = 0; i<list.size(); i++){
            for(int j = 0; j<k; j++ ){
                if ((int)list.get(i).charAt(j) < (int)smallest.charAt(j)){
                    smallest = list.get(i);
                    
                }
                else if ((int)list.get(i).charAt(j) == (int)smallest.charAt(j)){
                    continue;
                }
                else{
                    break;
                }
                
              
                    }
        }
        
        
        return smallest + "\n" + largest;
    
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}
                    
      