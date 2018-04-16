import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int size = in.nextInt();
        int i = size -1;
        while(i >= 0){
            for(int j = 0; j<i; j++){
                System.out.print(" ");
            }

            for(int k = size - i; k > 0 ; k--){
                System.out.print("#");
            }
        System.out.println();
        i--;
        }
        

}
}