import java.io.*;
import java.util.*;
import java.util.regex.*;
import java.lang.*;

public class Solution {

    public static void main(String[] args) {
        try {
        Scanner scan = new Scanner(System.in);
        if(!scan.hasNext()){
            System.out.println(0);
            return;
        }
        String s = scan.nextLine();
        // Write your code here.
        String t = s.trim();
        String[] a = t.split("[\\s!,?._'@]+");
       
        if(s == ""){
            System.out.println("0");
        }
        else{
            
            System.out.println(a.length);
        }
        for(int i = 0; i<a.length; i++){
            System.out.println(a[i]);
        }
        scan.close();
            }
        catch(NoSuchElementException e){
            System.out.println(0);
        }
    }
}