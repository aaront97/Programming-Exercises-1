import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static String timeConversion(String s) {
        // Complete this function
        char[] sChars = s.toCharArray();
        if(s.charAt(8) == 'P'){
           int a = Integer.parseInt(s.substring(0,2));
        if(a==12){
        sChars[8] = ' ';
        sChars[9] = ' ';
        s = String.valueOf(sChars);
        s = s.trim();
        }
        else {
        a += 12;
        int b = a % 10;
        int c = a / 10;
        sChars[0] = (char)(c+48);
        sChars[1] = (char)(b+48);
        sChars[8] = ' ';
        sChars[9] = ' ';
        s = String.valueOf(sChars);
        s = s.trim();
             }
           }
        
        else {
            int b = Integer.parseInt(s.substring(0,2));
            if(b==12){
            sChars[0] = (char)(48);
            sChars[1] = (char)(48);
            sChars[8] = ' ';
            sChars[9] = ' ';
            s = String.valueOf(sChars);
            s = s.trim();
            }
            else{
            sChars[8] = ' ';
            sChars[9] = ' ';
            s = String.valueOf(sChars);
            s = s.trim();
            }
            
        }
        return s;
        }
   
  

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String result = timeConversion(s);
        System.out.println(result);
    }
}