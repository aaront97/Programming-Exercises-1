import java.util.Calendar;
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Anagrams{
    static boolean isAnagram(String a, String b) {
        // Complete the function
        a = a.toLowerCase();
        b = b.toLowerCase();

        char[] charA = a.toCharArray();
        char[] charB = b.toCharArray();

        int temp = 0;

        for(int i = 0; i<charA.length; i++){
            for(int j = 0; j<charA.length; j++){
                if((int)charA[i] < (int)charA[j]){
                    temp = charA[i];
                    charA[i] = charA[j];
                    charA[j] = (char)temp;
                }
            }
        }
        for(int i = 0; i<charB.length; i++){
            for(int j = 0; j<charB.length; j++){
                if((int)charB[i] < (int)charB[j]){
                    temp = charB[i];
                    charB[i] = charB[j];
                    charB[j] = (char)temp;
                }
            }
        }
        String sortedA = String.valueOf(charA);
        String sortedB = String.valueOf(charB);

        return Objects.equals(sortedA, sortedB);
    
    }

    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );

    }
}