import java.io.*;
import java.util.*;

public class Solution {

    static float zero(int list[]){
        int count = 0;
        for(int i = 0; i<list.length; i++){
            if(list[i] == 0){
                count++;
            }
        }
        float result = count/(float)list.length;
        return result;
    }

    static float positive(int list[]){
        int count = 0;
        for(int i = 0; i<list.length; i++){
            if(list[i] > 0){
                count++;
            }
        }
        float result = count/(float)list.length;
        return result;

    }

    static float negative(int list[]){
        int count = 0;
        for(int i = 0; i<list.length; i++){
            if(list[i] < 0){
                count++;
            }
        }
        float result = count/(float)list.length;
        return result;

    }


    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int size = in.nextInt();
        int list[] = new int[size];
        for (int i = 0; i<size; i++){
            list[i] = in.nextInt();
        }
        System.out.println(positive(list));
        System.out.println(negative(list));
        System.out.println(zero(list));

    }
}