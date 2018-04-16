import java.util.Calendar;
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Warmup1 {
    public static void main (String[] args){
        String s = "welcometojava";
        ArrayList<String> list = new ArrayList<String>();

        for (int i = 0; (i+3)<s.length(); i++){
            list.add(s.substring(i,i+3));
        }
        list.add(s.substring(s.length()-3));

        for(String a: list){
            System.out.println(a);
        }

        String b = "Hello";
        String c = "Welcome";
        System.out.println((int)b.charAt(0)<(int)c.charAt(0));
    }
}