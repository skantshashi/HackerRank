import java.util.Scanner;

import javax.sql.rowset.spi.SyncResolver;

public class temp {
   public static int power(int a, int b){
      int k=1;
      for(int i=1;i<=b;i++){
         k=k*a;
      }
      return k;
   }
   public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    //String s=sc.nextLine();
    int a=power(2,0);
    System.out.print(a);
   }
}
