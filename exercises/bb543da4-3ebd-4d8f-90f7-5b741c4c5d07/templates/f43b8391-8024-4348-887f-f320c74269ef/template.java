import java.util.Arrays;
import java.util.Scanner;

public class template {
    public static void main(String args[]) {
      Scanner s = new Scanner(System.in);
      int length = s.nextInt();

      int [] myArray = new int[length];

      for(int i=0; i<length; i++ ) {
         myArray[i] = s.nextInt();
      }

      myArray = sortNumsAscending(myArray);

      System.out.println(Arrays.toString(myArray));
   }

   {{code}}
}
