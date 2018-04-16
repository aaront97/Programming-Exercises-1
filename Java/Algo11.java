import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int[] solve(int[] grades){
        // Complete this function
        int[] solved = new int [grades.length];
        int temp = 0;
        for(int i = 0; i<grades.length; i++){
            if(grades[i] < 38){
                solved[i] = grades[i];
            }
            else if((grades[i]%5) != 2 && (grades[i]%5)>2) {
                solved[i] = (grades[i] - grades[i]%5)+5;
            }
            else {
                solved[i] = grades[i];
            }
        }
        return solved;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] grades = new int[n];
        for(int grades_i=0; grades_i < n; grades_i++){
            grades[grades_i] = in.nextInt();
        }
        int[] result = solve(grades);
        for (int i = 0; i < result.length; i++) {
            System.out.print(result[i] + (i != result.length - 1 ? "\n" : ""));
        }
        System.out.println("");
        

    }
}
