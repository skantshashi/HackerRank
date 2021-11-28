import java.io.*;
import java.util.*;

public class problem5 {
    public static int power(int a, int b){
      int k=1;
      for(int i=1;i<=b;i++){
         k=k*a;
      }
      return k;
   }

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        for(int i=0;i<N;i++){
            int a=sc.nextInt();
            int b=sc.nextInt();
            int n=sc.nextInt();
            for(int j=1;j<=n;j++){
                int k=power(2,j)-1;
                System.out.print(a+k*b+" ");
            }
            System.out.println();
        }
    }
}
