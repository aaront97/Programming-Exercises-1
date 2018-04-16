import java.io.*;
import java.util.*;

public class StringTokens {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        // Write your code here.
        ArrayList<String> list = new ArrayList<String>();
        String[] a = s.split("[\\s!,?._'@]+");
        System.out.println(a.length);
        for(int i = 0; i<a.length; i++){
            System.out.println(a[i]);
        }
        scan.close();
    }
}
